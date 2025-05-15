/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:02:15 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 20:03:11 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Finds the first occurrence of a character in a string
 * and returns a pointer to that position in the string
 */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}
/*
#include <stdio.h>
int	main()
{
	const char	*str = "holamundo";
	char	ch = 'o';
	char	*result;
	result = ft_strchr(str, ch);
	printf("%s", result);
	return (0);
}*/
