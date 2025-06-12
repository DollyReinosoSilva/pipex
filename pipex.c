/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:54:41 by dreinoso          #+#    #+#             */
/*   Updated: 2025/06/07 23:13:09 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex.h"

void	child_process1(char **argv, char **envp, int *fd)
{
	int	file1;

	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
		error(argv[1], 0);
	dup2(fd[1], STDOUT_FILENO);
	dup2(file1, STDIN_FILENO);
	close(fd[0]);
	close(fd[1]);
	close(file1);
	execute(argv[2], envp);
}

void	child_process2(char **argv, char **envp, int *fd)
{
	int	file2;

	file2 = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file2 == -1)
		error(argv[4], 0);
	dup2(fd[0], STDIN_FILENO);
	dup2(file2, STDOUT_FILENO);
	close(fd[1]);
	close(fd[0]);
	close(file2);
	execute(argv[3], envp);
}

int	execute_pipex(char **argv, char **envp)
{
	int		fd[2];
	pid_t	pid1;
	pid_t	pid2;

	if (pipe(fd) == -1)
		error("pipex", 0);
	pid1 = fork();
	if (pid1 == -1)
		error("fork", 0);
	if (pid1 == 0)
		child_process1(argv, envp, fd);
	pid2 = fork();
	if (pid2 == -1)
		error("fork", 0);
	if (pid2 == 0)
		child_process2(argv, envp, fd);
	close(fd[0]);
	close(fd[1]);
	waitpid(pid1, NULL, 0);
	waitpid(pid2, NULL, 0);
	return (0);
}

int	main(int argc, char **argv, char **envp)
{
	if (argc == 5)
		execute_pipex(argv, envp);
	else
	{
		ft_putstr_fd("Error: Number of incorrect arguments.\n", 2);
		ft_putstr_fd("Ex: ./pipex <file1> <cmd1> <cmd2> <file2>\n", 1);
	}
	return (0);
}
