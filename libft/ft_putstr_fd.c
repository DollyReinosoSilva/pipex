/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 06:23:58 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/15 14:39:58 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Sends the string 's' to the specified file descriptor 
 */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*
#include <stdio.h>
int	main()
{
	char str[] = "Hola, mundo!";
	ft_putstr_fd(str, 1);
	return 0;
}*/
