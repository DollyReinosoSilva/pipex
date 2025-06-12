/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 03:03:16 by dreinoso          #+#    #+#             */
/*   Updated: 2025/06/12 19:34:44 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <sys/wait.h>
# include <fcntl.h>
# include <stdlib.h> 
# include <stdio.h>
# include <string.h>
# include "libft/libft.h"

void	error(char *cmd, int not_found);
char	**get_paths(char **envp);
char	*find_path(char *cmd, char **envp);
void	free_split(char **split);
void	execute(char *argv, char **envp);
#endif
