/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:22:09 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:22:09 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The memccpy() function copies bytes from string "src" to string "dst".
If the character "c" (as converted to an unsigned char) occurs in the
string "src", the copy stops and a pointer to the byte after the copy
of "c" in the string dst is returned.  Otherwise, n bytes are copied,
and a NULL pointer is returned.
The source and destination strings should not overlap, as the
behavior is undefined.
---------------------------------------------------------------------------- */
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		*(d + i) = *(s + i);
		if (*(s + i) == (unsigned char)c)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}
