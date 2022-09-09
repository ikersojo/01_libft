/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:22:35 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:22:35 by isojo-go         ###   ########.fr       */
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

	if (len == 0)
		return (dst);
	if (src == NULL && dst == NULL)
		return (NULL);
	if (dst < src)
	{
		d = (unsigned char *)dst;
		s = (unsigned char *)src;
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d = (unsigned char *)dst + (len - 1);
		s = (unsigned char *)src + (len - 1);
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}
