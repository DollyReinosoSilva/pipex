/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:09:32 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 21:45:46 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * memcmp --compares two blocks of memory byte by byte 
 */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char s1[] = "abcdefg";
	char s2[] = "abcdddd";
	printf("%d\n", ft_memcmp(s1, s2, 5));
}*/
