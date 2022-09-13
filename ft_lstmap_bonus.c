/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:21:49 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:21:49 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Iterates a list lst and applies the function f to the content of each element.
Create a new list resulting from the successive applications of teh function f.
The del function is used to delete the content of an element if needed.
Returns the new list or NULL if the allocation fails.
---------------------------------------------------------------------------- */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_item;
	t_list	*temp;

	if (f == NULL || lst == NULL)
		return (NULL);
	first_item = ft_lstnew(f(lst->content));
	if (first_item == NULL)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (temp == NULL)
		{
			ft_lstclear(&first_item, del);
			return (NULL);
		}
		ft_lstadd_back(&first_item, temp);
		lst = lst->next;
	}
	return (first_item);
}
