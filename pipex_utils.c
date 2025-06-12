/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:32:04 by dreinoso          #+#    #+#             */
/*   Updated: 2025/06/08 17:24:16 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**get_paths(char **envp)
{
	int	i;

	i = 0;
	while (envp[i] && ft_strnstr(envp[i], "PATH=", 5) == 0)
		i++;
	if (!envp[i])
		return (NULL);
	return (ft_split(envp[i] + 5, ':'));
}

char	*find_path(char *cmd, char **envp)
{
	char	**paths;
	char	*path;
	char	*tmp;
	int		i;

	if (ft_strchr(cmd, '/'))
		return (ft_strdup(cmd));
	paths = get_paths(envp);
	if (!paths)
		return (NULL);
	i = -1;
	while (paths[++i])
	{
		tmp = ft_strjoin(paths[i], "/");
		path = ft_strjoin(tmp, cmd);
		free(tmp);
		if (access(path, F_OK) == 0)
			return (free_split(paths), path);
		free(path);
	}
	return (free_split(paths), NULL);
}

void	free_split(char **split)
{
	int		i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
		free(split[i++]);
	free(split);
}

void	error(char *cmd, int not_found)
{
	if (not_found)
	{
		write(2, "pipex: command not found\n", 25);
		if (cmd && cmd[0])
		{
			write(2, "pipex: command not found:\n", 26);
			write(2, cmd, strlen(cmd));
		}
		exit(127);
	}
	else
	{
		if (cmd && cmd[0])
		{
			write(2, "pipex: no such file or directory: ", 35);
			write(2, cmd, strlen(cmd));
			write(2, "\n", 1);
		}
		else
			write(2, "pipex: no such file or directory\n", 33);
	}
	exit(EXIT_FAILURE);
}

void	execute(char *argv, char **envp)
{
	char	**cmd;
	int		i;
	char	*path;

	i = 0;
	cmd = ft_split(argv, ' ');
	if (!cmd || !cmd[0])
	{
		while (cmd && cmd[i])
			free(cmd[i++]);
		free(cmd);
		error("", 1);
	}
	path = find_path(cmd[0], envp);
	if (!path || execve(path, cmd, envp) == -1)
	{
		while (cmd[i])
			free(cmd[i++]);
		free(cmd);
		error(cmd[0], !path);
	}
	while (cmd[i])
		free(cmd[i++]);
	free(cmd);
}
