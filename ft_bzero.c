/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:18:32 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:18:32 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The bzero() function writes n zeroed bytes to the string s. Effectively erases
all data by writing zeros (bytes containing '\0').
If n is zero, bzero() does nothing.
---------------------------------------------------------------------------- */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
