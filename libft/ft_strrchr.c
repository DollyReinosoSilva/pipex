/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:58:45 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 20:12:49 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *strrchr --Search for characters c from the end of the string s 
 * to the beginning and returns a pointer to that position
 */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	c1;
	int		i;

	c1 = (char)c;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == c1)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
int     main()
{
        char	*str = "pera manzana uva pera";

	printf("%s\n", ft_strrchr(str, 'p'));
	return (0);
}*/
