/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:43:58 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 16:44:27 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * isprint --checks if c is a printable character
 * if yes, it is non-zero otherwise zero 
 */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int	main()
{
	char	c;
	int	res;
	
	c = '\t';
	ft_isascii(c);
	res = ft_isascii(c);
	printf("%d", res);
}
*/
