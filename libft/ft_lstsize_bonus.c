/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:57:26 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/09 13:58:14 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * recorre y cuenta el numero de elementos de la lista
 * devuelve un entero (el tamaño de la lista)
 */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
