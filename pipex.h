/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 03:03:16 by dreinoso          #+#    #+#             */
/*   Updated: 2025/05/09 03:03:21 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Esto asegura que el archivo de cabecera se incluya solo una vez durante la compilación, 
evitando errores de redeclaración.*/
#ifndef PIPEX_H
# define PIPEX_H

#include <unistd.h> // Para pipe(), fork(), dup2(), execve(), access(), close(), read(), write()
#include <sys/wait.h>   // Para waitpid()
#include <fcntl.h>  // Para open() y las constantes O_RDONLY, O_WRONLY, etc.
#include <stdlib.h> // Para exit(), malloc(), free()
#include <stdio.h>  // Para perror()
#include <string.h> // Para strerror() (aunque no se usa directamente aquí, es común)
#include "../libft/libft.h"

/* Mandatory functions */
void    error(void);    // Función para manejar errores y salir.
char	*find_path(char *cmd, char **envp); // Encuentra la ruta completa de un comando.
int		get_next_line(char **line); // Lee una línea de un descriptor de archivo (no se usa directamente en este main, pero está declarada).
void	execute(char *argv, char **envp);   // Ejecuta un comando.

/* Bonus functions */
int		open_file(char *argv, int i);    // Abre un archivo (probablemente para la parte de bonificación).
void	usage(void);    // Muestra cómo usar el programa (probablemente para la parte de bonificación).
#endif