/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:03:34 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/02 17:03:34 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The bzero() function erases the data on the n bytes of memory starting at the
location pointed to by s, writing zeros (bytes containing '\0').
---------------------------------------------------------------------------- */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
