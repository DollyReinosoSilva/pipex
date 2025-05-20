/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:54:41 by dreinoso          #+#    #+#             */
/*   Updated: 2025/05/15 17:08:28 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../includes/pipex.h"

void    child_process(char **argv, char **envp, int *fd)//Esta función se ejecuta dentro del proceso hijo. Su objetivo es ejecutar cmd1.
{
    int     filein;//// Descriptor de archivo para file1.
    // (Paso C1: Abrir el archivo de entrada)
    filein = open(argv[1], O_RDONLY, 0777);  // argv[1] es file1. O_RDONLY = solo lectura.
    if (filein == -1)   // Si open() falla.
            error();
    // (Paso C2: Redirigir la salida estándar (stdout) a la tubería)   
    dup2(fd[1], STDOUT_FILENO); // STDOUT_FILENO (usualmente 1) ahora apunta a fd[1] (escritura de la tubería).
    // (Paso C3: Redirigir la entrada estándar (stdin) al archivo de entrada)
    dup2(filein, STDIN_FILENO);  // STDIN_FILENO (usualmente 0) ahora apunta a filein.
    // (Paso C4: Cerrar los extremos no necesarios de la tubería y el archivo)
    close(fd[0]);   // El hijo no leerá de la tubería, así que cierra fd[0].
// close(fd[1]); // fd[1] no se cierra aquí explícitamente porque dup2 lo hace implicitamente si STDOUT_FILENO ya estaba abierto, y execve cerrará todos los descriptores de archivo no marcados con FD_CLOEXEC. Sin embargo, es buena práctica cerrarlo si no se va a usar más después de dup2 y antes de execve.
 // close(filein); // Similar a fd[1] por dup2.
 // (Paso C5: Ejecutar el primer comando)
    execute(argv[2], envp); // argv[2] es cmd1.
}

void    parent_process(char **argv, char **envp, int *fd)
{
    int     fileout;    // Descriptor de archivo para file2.
    // (Paso P1: Abrir el archivo de salida)
    // argv[4] es file2. O_WRONLY = solo escritura, O_CREAT = crear si no existe, O_TRUNC = truncar si existe.
    fileout = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
    if (fileout == -1)  // Si open() falla
            error();
    // (Paso P2: Redirigir la entrada estándar (stdin) a la tubería)
    dup2(fd[0], STDIN_FILENO);  // STDIN_FILENO ahora apunta a fd[0] (lectura de la tubería).
    // (Paso P3: Redirigir la salida estándar (stdout) al archivo de salida)
    dup2(fileout, STDOUT_FILENO);   // STDOUT_FILENO ahora apunta a fileout
    // (Paso P4: Cerrar los extremos no necesarios de la tubería y el archivo)
    close(fd[1]);   // El padre no escribirá en la tubería, así que cierra fd[1].
    // close(fd[0]); // Buena práctica cerrarlo también después de dup2.
    // close(fileout); // Buena práctica cerrarlo también después de dup2.

	// (Paso P5: Ejecutar el segundo comando)
    execute(argv[3], envp); // argv[3] es cmd2.
}

int	main(int argc, char **argv, char **envp)
{
	int	fd[2];  // Array para los descriptores de archivo de la tubería (pipe).
	pid_t	pid1;    // Identificador del proceso hijo.
	// (Paso 1: Comprobar el número de argumentos)
	if (argc == 5)
	{
        // (Paso 2: Crear la tubería)
		if (pipe(fd) == -1)
			error();// Si falla, llama a la función error()
        // (Paso 3: Crear un proceso hijo (fork))
		pid1 = fork();  
		if (pid1 == -1)  // Si fork() falla.
			error();
        // (Paso 4: Código del proceso hijo)
		if (pid1 == 0)
			child_process(argv, envp, fd);// Esta función configurará al hijo para ejecutar cmd1, tomando su entrada de file1 y enviando su salida a la tubería.
        // (Paso 5: Código del proceso padre) (porque pid1 no será 0).
		waitpid(pid1, NULL, 0); // El proceso padre espera a que el proceso hijo (con ID pid1) termine su ejecución. Esto es importante para asegurar que cmd1 escriba sus datos en la tubería antes de que cmd2 intente leerlos.
		parent_process(argv, envp, fd);//Esta función configurará al padre para ejecutar cmd2, tomando su entrada de la tubería (lo que cmd1 escribió) y enviando su salida a file2.
	}
	else
	{
        // (Paso 6: Error si los argumentos no son correctos)
		ft_putstr_fd("\033[31mError: Bad arguments\n\e[0m", 2); // Escribe en stderr.(descriptor de archivo 2), que es el canal estándar para errores.
		ft_putstr_fd("Ex: ./pipex <file1> <cmd1> <cmd2> <file2>\n", 1); // Escribe en stdout.(descriptor de archivo 1).
	}
	return (0);
}