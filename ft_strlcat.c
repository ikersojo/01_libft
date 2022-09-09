/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:26:16 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:26:16 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The strlcat() function appends the src string to the dest string, overwriting
the terminating null byte at the end of dest, and then adds a terminating null
byte. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the
result.
Unlike strncat (), it takes the full size of the buffer (not just the length)
and guarantee to NUL-terminate the result (as long as there is at least one
byte free in dst).
Note that a byte for the NULL should be included in size.
Note however, that if strlcat() traverses n characters in dest without finding
a NUL, the length of the string is considered to be n and the destination
string will not be NUL-terminated (since there was no space for the NUL).
This keeps strlcat() from running off the end of a string. In practice this
should not happen (as it means that either size is incorrect or that dst is
not a proper "C" string). The check exists to prevent potential security
problems in incorrect code.
---------------------------------------------------------------------------- */
size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	res;

	if (n == 0)
		return (ft_strlen(src));
	if (n > ft_strlen(dest))
	{
		res = ft_strlen(dest) + ft_strlen(src);
		i = 0;
		while (*(dest + i) && (i < (n - 1)))
			i++;
		while (*src && (i < (n - 1)))
			*(dest + i++) = *src++;
		*(dest + i) = '\0';
	}
	else
		res = n + ft_strlen(src);
	return (res);
}
