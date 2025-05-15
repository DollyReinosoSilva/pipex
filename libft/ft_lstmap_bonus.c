/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreinoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:43:45 by dreinoso          #+#    #+#             */
/*   Updated: 2024/10/15 11:18:02 by dreinoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	node = NULL;
	while (lst)
	{
		new_elem = (*f)(lst->content);
		new_lst = ft_lstnew(new_elem);
		if (!new_elem)
		{
			del(new_elem);
			ft_lstclear(&node, del);
			return (NULL);
		}
		ft_lstadd_back(&node, new_lst);
		lst = lst->next;
	}
	// free(lst);
	return (new_lst);
}
