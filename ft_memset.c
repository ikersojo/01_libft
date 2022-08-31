/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:19:34 by isojo-go          #+#    #+#             */
/*   Updated: 2022/08/05 13:19:34 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The memset() function fills the first n bytes of the memory area pointed to
by s with the constant byte c (converted to unsigned char).
It returns a pointer to s.
----------------------------------------------------------------------------- */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		*ptr++ = (unsigned char)c;
		i++;
	}
	return (s);
}
