/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:27:57 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 16:36:42 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *cisalpha --heck if c is an alphabet if it is, it is non-zero else zero
 */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	char	c;
	
	c = '0';
	printf("%d", c);
}
*/
