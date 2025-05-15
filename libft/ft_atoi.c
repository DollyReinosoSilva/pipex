/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:04:09 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 22:05:09 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * convert characters to integer
 */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	number;
	long	sign;
	size_t	i;

	number = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n'
		|| nptr[i] == '\t' || nptr[i] == '\v'
		|| nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = (number * 10) + (nptr[i] - 48);
		i++;
	}
	return ((int)number * sign);
}

// #include <stdio.h>

// int	main(void)
// {

// 	char	*str = NULL;
// 	char	str1[30] = "abc";
// 	char	str2[30] = "";
// 	char	str3[30] = " 1";
// 	char	str4[30] = "45688";
// 	char	str5[30] = "30abc";

// 	printf ("%d\n ", ft_atoi(str));
// 	printf ("%d\n ", ft_atoi(str1));
// 	printf ("%d\n ", ft_atoi(str2));
// 	printf ("%d\n ", ft_atoi(str3));
// 	printf ("%d\n ", ft_atoi(str4));
// 	printf ("%d\n ", ft_atoi(str5));
// 	return 0;
// }

