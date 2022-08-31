/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bouns.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:15:37 by isojo-go          #+#    #+#             */
/*   Updated: 2022/08/05 13:15:37 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Iterates the list lst and applies the function f to the content of each element.
----------------------------------------------------------------------------- */
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	next;

	if (f)
	{
		while (lst)
		{
			f(lst->content);
			lst = next;
		}
	}
}