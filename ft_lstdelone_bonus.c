/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:21:28 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:21:28 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Takes as a parameter a pointer to an element and frees the memory of the
element’s content using the function del given as a parameter, then frees the
memory using free(3). The memory of next must not be freed.
---------------------------------------------------------------------------- */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && *del)
	{
		del(lst->content);
		free(lst);
	}
}
