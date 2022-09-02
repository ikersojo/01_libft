/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 07:24:19 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/02 07:24:19 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The memmove() function copies n bytes from src to dest. The memory areas may
overlap: the copy of each byte is conducted in a secuence which does not
destroy information. It returns a pointer to dest.
---------------------------------------------------------------------------- */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dest < src)
		return (ft_memcpy(dest, src, n));
	d = (unsigned char *)dest + (n - 1);
	s = (unsigned char *)src + (n - 1);
	i = 0;
	while (i < n)
	{
		*d-- = *s--;
		i++;
	}
	return (dest);
}
