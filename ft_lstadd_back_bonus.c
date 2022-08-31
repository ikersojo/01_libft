/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:14:22 by isojo-go          #+#    #+#             */
/*   Updated: 2022/08/05 13:14:22 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Takes as a parameter the adress of a pointer to the first element of a list and
adds the element new at the end of the list.
----------------------------------------------------------------------------- */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (new && lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			tmp = ft_lstlat(*lst);
			temp->next = new;
		}
	}
}