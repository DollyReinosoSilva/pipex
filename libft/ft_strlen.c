/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:10:16 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 16:46:53 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * strlen --calculates the length of a string 
 * returns a value of type size_t 
 */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int	main()
{
	char	str1[20] = "Hello";
	char	str2[30] = "worl";

	printf("str1 len:%zu\n", ft_strlen(str1));
	printf("str1 len:%zu\n", ft_strlen(str2));
	return (0);
}
*/
