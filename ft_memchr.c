/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:22:15 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:22:15 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The memchr() function scans the initial n bytes of the memory area pointed to
by s for the first instance of c. Both c and the bytes of the memory area
pointed to by s are interpreted as unsigned char.
The functions return a pointer to the matching byte or NULL if the character
does not occur in the given memory area.
---------------------------------------------------------------------------- */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(src + i) == (unsigned char)c)
			return (src + i);
		i++;
	}
	return (NULL);
}
