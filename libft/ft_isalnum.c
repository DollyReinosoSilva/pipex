/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:54:35 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 16:41:41 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *  asalnum --check if c is an alphabet or number 
 *  if it is, it is non-zero else zero
 */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
/*
int	main()
{
	char	c;
	int	res;

	c = '/';
	ft_isalnum(c);
	res = ft_isalnum(c);
	printf("El caracter es: %d", res);
}
*/
