/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:50:04 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 18:05:37 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * bzero --is used to set all bytes in a memory region to zero.
 */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int	main()
{
	char	str[10] = "123456789";

	ft_bzero(str + 3, 1);
        printf("%s\n", str);
	return (0);
}
*/
