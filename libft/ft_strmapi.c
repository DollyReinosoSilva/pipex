/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 05:03:42 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/11 04:41:57 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *  apply a function to each character of a string
 */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = malloc (sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
char my_funcion(unsigned int i, char c)
{
	return (char)(c + i);
}

int	main(void)
{
	char	str1[] = "abc";
	char	*str2;

	str2 = ft_strmapi(str1, my_funcion);
	if (!str2)
	{
		printf("Error: no se pudo asignar memoria\n");
		return (1);
	}
	printf("El puntero es: %s\n", str2);
	free(str2);
	return (0);
}*/
