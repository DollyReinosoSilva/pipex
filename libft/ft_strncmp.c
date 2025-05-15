/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:18:26 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/05 10:08:53 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char	s1[10] = "aaa";
	char	s2[10] = "aab";

	int	res1;
	int	res2;
	int	res3;
	int	res4;

	res1 = ft_strncmp(s1, s2, 2);
	res2 = ft_strncmp(s2, s1, 4);
	res3 = ft_strncmp(s1, s2, 4);
	res4 = ft_strncmp(s1, s2, 0);
	printf("%d\n", res1);
	printf("%d\n", res2);
	printf("%d\n", res3);
	printf("%d\n", res4);
	return (0);
}*/
