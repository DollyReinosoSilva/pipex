/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:02:37 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 22:59:16 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Extracts a substring from a given string 
 */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start)
		return (ft_strdup(""));
	if (s_len - start < len)
		len = s_len - start;
	sub_str = (char *)malloc((len + 1) * sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	ft_strlcpy(sub_str, s + start, len + 1);
	return (sub_str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = "Hola, 42Madrid";
	char	*sub_str;
	unsigned int	inicio = 7;
	size_t len_sub_str = 8;

	sub_str = ft_substr(str, inicio, len_sub_str);
	if  (sub_str)
	{
		printf("El puntero a lanueva subcadena es: %s\n", sub_str);
		free(sub_str);
	}
	else
	{
		printf("Error. Asignacion de memoria fallida. \n");
	}
	return (0);
}
*/
