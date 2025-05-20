/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 03:03:16 by dreinoso          #+#    #+#             */
/*   Updated: 2025/05/20 18:35:13 by dreinoso         ###   ########.fr       */
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

void	error(void);
char	*find_path(char *cmd, char **envp);
void	execute(char *argv, char **envp);
int		get_next_line(char **line);
#endif
