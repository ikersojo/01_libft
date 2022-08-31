/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:14:41 by isojo-go          #+#    #+#             */
/*   Updated: 2022/08/05 13:14:41 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Takes as a parameter a pointer to an element of a list and deletes and frees the
memory of this element and every successors using the functions del andfree(3).
Finally the pointer to the element must be set to NULL.
----------------------------------------------------------------------------- */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_item;

	if (lst && *lst && del)
	{
		while (*lst)
		{
			next_item = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = next_item;
		}
		*lst = NULL;
	}
}