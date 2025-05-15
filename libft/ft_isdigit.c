/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:11:57 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 17:52:36 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * isdigit --checks if c is a number, if it is, it is non-zero,
 * otherwise it is zero 
 */

#include "libft.h"

int	ft_isdigit(int c)
{
	while (c != '\0')
	{
		if (c >= '0' && c <= '9')
			return (1);
		else
			return (0);
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	int	c;

	c = 'a';
	ft_isdigit(c);
	printf("%d", c);
}
*/
