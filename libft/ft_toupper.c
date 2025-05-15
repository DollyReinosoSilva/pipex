/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:27:58 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 19:00:46 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * convert a character to its uppercase equivalent if it is a lowercase letter
 */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
/*
int	main()
{
	unsigned char	c;

	c = 'm';
	printf("El caracter convertido a Mayuscula es: %c", ft_toupper(c));
	return (0);
}
*/
