/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:46:31 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 18:48:01 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * strlcpy --safely copy strings, ensuring that there are no buffer overflows 
 * and that the destination string is always null-terminated.
 */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size )
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (src[i] != '\0' && i < (size -1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>
int	main()
{
	char 	src[] = "hola mundo";
	char	destino[20];
	size_t	result;

	result = ft_strlcpy(destino, src, sizeof(destino));
	printf("src es: %s\n", src);
	printf("detino es: %s\n", destino);
	printf("la longuitud de la cadena src es: %zu\n", result);
	return (0);
}*/
