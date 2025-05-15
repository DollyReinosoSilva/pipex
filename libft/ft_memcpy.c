/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:48:34 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 18:11:35 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * memcpy --copy a specified number of bytes from one memory location to another
 * Memory areas must not overlap
 */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (dst == (void *) 0 && src == (void *) 0)
		return (dst);
	while (n > 0)
	{
		*(tmp_dst++) = *(tmp_src++);
		n--;
	}
	return (dst);
}
/*
int	main(void)
{
   char src[] = "hola";
   char dst[5] = "";

   ft_memcpy(dst, src, 4);
   printf("El puntero de destino es: %s\n", dst);
   return (0);
}
*/
