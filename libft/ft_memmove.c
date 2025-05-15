/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:19:54 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 18:15:08 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * copies a block of memory from one location to another
 * with the ability to safely handle memory overlays
 * returns a pointer to the destination memory block (dst)
 */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src && n > 0)
		return (NULL);
	if (dst > src)
	{
		i = n;
		while (i > 0)
		{
			*(char *)(dst + i -1) = *(char *)(src + i -1);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
int	main(void)
{
	char	hi[15] = "¡holamundo";
	char	by[15] = "aaaaaaaaaa";

	printf("before :%s\n", hi);
	ft_memmove(hi, by, 3);
	printf("after  :%s\n", hi);
	return (0);
}*/
