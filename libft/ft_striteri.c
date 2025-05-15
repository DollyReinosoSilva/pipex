/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 08:09:32 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/15 14:14:16 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Applies a function to each character in a string
 * passing the index and address of the current character.
 * This allows operations to be performed on each character in the string,
 * such as modifying or printing it.
 */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned char	i;

	i = 0;
	while (*(s + i))
	{
		f(i, s + i);
		++i;
	}
}
/*
#include  <stdio.h>

void my_funcion(unsigned  int  indice, char *c)
{
	printf("El  indice es :%u El caracter es :%c\n", indice, *c);
}
int	main()
{
	char  str[] = "Holaa, mundo";
	ft_striteri(str, my_funcion);
	return (0);
}*/
