/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:54:42 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 21:42:23 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *memchr --searches for the first occurrence of the character c
 * (interpreted as an unsigned char) in the first n bytes
 *  of the memory area pointed to by s.
 */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *) &str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char str[] = "hola mundo";
	char ch = 'a';

	char *result = ft_memchr(str, ch, sizeof(str));
	if (result != NULL)
	printf("%c: %ld\n", ch, result - str);
	else
	printf("Cadena %c\n", ch);
	return (0);
}*/
