/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:22:42 by isojo-go          #+#    #+#             */
/*   Updated: 2022/08/05 13:22:42 by isojo-go         ###   ########.fr       */
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
----------------------------------------------------------------------------- */
size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	res;

	res = ft_strlen(dest) + ft_strlen(src);
	if (n == 0)
		return (res);
	i = 0;
	while (*(dest + i) && (i < (n - 1)))
		i++;
	while (*src && (i < (n - 1)))
		*(dest + i++) = *src++;
	*(dest + i) = '\0';
	return (res);
}