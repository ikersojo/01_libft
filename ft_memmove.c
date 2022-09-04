/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:24:19 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/02 17:24:19 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The memmove() function copies "len" bytes from "src" to "dst". The two strings
may overlap; the copy is always done in a non-destructive manner. It returns a
pointer to dst.
---------------------------------------------------------------------------- */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dst < src)
		return (ft_memcpy(dst, src, len));
	d = (unsigned char *)dst + (len - 1);
	s = (unsigned char *)src + (len - 1);
	i = 0;
	while (i < len)
	{
		*d-- = *s--;
		i++;
	}
	return (dst);
}
