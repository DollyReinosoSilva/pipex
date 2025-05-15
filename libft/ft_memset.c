/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:02:00 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/15 16:27:33 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * memset --fills a block of memory with a specific value,
 */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int	main()
{
	char	str[10] = "hola mundo";
	printf("%s\n", str);
	ft_menset(str, '$', 4);
	printf("El puntero al bloque de memoria que se ha llenado es: %s\n", str);
	return (0);
}
*/
