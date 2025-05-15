/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:46:29 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 22:38:29 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Duplicates a string
 */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*new_s;

	i = 0;
	len = 0;
	while (s[len])
		len++;
	new_s = (char *)malloc(sizeof(char) * len + 1);
	if (!new_s)
		return (NULL);
	while (s[i])
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*str = "Hola, mundo!";
	char	*duplicado;

	duplicado = ft_strdup(str);
	if (duplicado == NULL)
	{
		printf("Error al duplicar la cadena.\n");
		return (1);
	}
	printf("La cadena original es: %s\n", str);
	printf("El duplicado es: %s\n", duplicado);
	free(duplicado);
	return (0);
}
*/
