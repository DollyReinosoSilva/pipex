/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:55:55 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 19:49:30 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * tolower --convert a character to its lowercase equivalent
 * if it is an uppercase letter.
 */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
/*
int	main()
{
	unsigned char	c;

	c = 'M';
	printf("%c", ft_tolower(c));
	return (0);
}
*/
