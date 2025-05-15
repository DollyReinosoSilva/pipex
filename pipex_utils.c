/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:32:04 by dreinoso          #+#    #+#             */
/*   Updated: 2025/05/15 17:32:07 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../includes/pipex.h"

char    *find_path(char *cmd, char **envp)
{
    char    **paths;
    char    *path;
    int         i;
    char    *part_path;

    i = 0;
    while (ft_strnstr(envp[i], "PATH", 4) == 0)//Busca la variable de entorno PATH en el array envp.
            i++;
    paths = ft_split(envp[i] + 5, ':');//Divide la cadena de PATH en directorios individuales utilizando ft_split con el delimitador :.
    i = 0;
    while (paths[i])//Itera a través de cada directorio en paths
    {
        part_path = ft_strjoin(paths[i], "/");//construye la ruta completa al comando (directorio/comando) utilizando ft_strjoin
        path = ft_strjoin(part_path, cmd);
        free(part_path);
        if (access(path, F_OK) == 0)//erifica si el archivo existe y es ejecutable utilizando access(path, F_OK).
                return (path);
        free(path);
        i++;
    }
    i = -1;
    while (paths[++i])
            free(paths[i]);
    free(paths);
    return (0);
}

void    error(void)
{
    perror("\033[31mError");
    exit(EXIT_FAILURE);
}

void    execute(char *argv, char **envp)
{
    char    **cmd;
    int     i;
    char    *path;

    i = -1;
    cmd = ft_split(argv, ' ');
    path = find_path(cmd[0], envp);
    if (!path)
    {
        while (cmd[++i])
                free(cmd[i]);
        free(cmd);
        error();
    }
    if (execve(path, cmd, envp) == -1)
            error();
}

int     get_next_line(char **line)
{
    char    *buffer;
    int             i;
    int             r;
    char    c;

    i = 0;
    r = 0;
    buffer = (char *)malloc(10000);
    if (!buffer)
            return (-1);
    r = read(0, &c, 1);
    while (r && c != '\n' && x != '\0')
    {
        if (c != '\n' && c != '\0')
                buffer[i] = c;
        i++;
        r = read(0, &c, 1);
    }
    buffer[i] = '\n';
    buffer[++i] = '\0';
    *line = buffer;
    free(buffer);
    return (r);
}

