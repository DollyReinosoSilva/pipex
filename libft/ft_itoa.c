/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:12:39 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/11 03:40:48 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Converts an integer n to a character string
 */

#include "libft.h"

static int	ft_digit_count(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned int	neg_n;
	int				i;
	char			*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		neg_n = -n;
	else
		neg_n = n;
	i = ft_digit_count(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (i--)
	{
		str[i] = (neg_n % 10) + '0';
		neg_n = neg_n / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	int	numbers[] = {123, -456, 0, 2147483647, -2147483648};
	char	*result;
	size_t	i;

	i = 0;
	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		result = ft_itoa(numbers[i]);
		if (!result)
		{
			printf("Error converting number %d.\n", numbers[i]);
			return (1);
		}
		printf("Nunmer: %d, String: %s\n", numbers[i], result);
		free(result);
		i++;
	}
	return (0);
}
*/
