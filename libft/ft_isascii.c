/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:03:13 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 16:43:18 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * isascii --isascii --check if c is an alphabet if it is,
 *  it is non-zero else zero 
 */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

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
