/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:08:14 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 19:45:24 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * strlcat --Safely concatenate strings, ensuring that there are no buffer 
 * overflows and that the destination string is always null-terminated
 */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (size < dst_len + 1)
		return (size + src_len);
	if (size > dst_len + 1)
	{
		while (src[i] != '\0' && dst_len + 1 + i < size)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int	main()
{
	char	dst[8] = "Hello";
	const char	*src = " World";
	size_t	size = sizeof(dst);
	size_t result = ft_strlcat(dst, src, size);
	printf("Destino: %s\n", dst);
	printf("La longitud de la cadena que se ha creado es: %zu\n", result);
	return 0;
}
*/
