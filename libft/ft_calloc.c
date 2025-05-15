/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:17:56 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/10 22:22:26 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;

	temp = malloc(nmemb * size);
	if (!temp)
		return (NULL);
	ft_memset(temp, 0, nmemb * size);
	return (temp);
}
/*
int	main()
{
	char	*str;
	int	i;
	
	i = 0;
	str = (char *)calloc(10, sizeof(char));
	while (i < 10)
	{
	str[i] += '0';
	i++;
	}
	printf("%s\n", str);
}
*/
