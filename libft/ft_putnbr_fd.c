/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 07:31:18 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/15 15:10:14 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * prints an integer (int) to a specified file descriptor
 */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char			str;
	long long int	n;

	n = nb;
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n / 10 != 0)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	str = '0' + (n % 10);
	write(fd, &str, 1);
}
/*
#include <unistd.h>

int	main()
{
	int	fd = 1;

	ft_putnbr_fd(42, fd);             // Imprime 42
	ft_putnbr_fd(-42, fd);            // Imprime -42
	ft_putnbr_fd(0, fd);              // Imprime 0 
	ft_putnbr_fd(-2147483648, fd);    // Imprime -2147483648

    return 0;
}*/
