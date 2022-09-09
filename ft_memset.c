/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:22:42 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:22:42 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The memset() function writes "len" bytes of value "c" (converted to an unsigned
char) to the string "b". The memset() function returns its first argument.
---------------------------------------------------------------------------- */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		*ptr++ = (unsigned char)c;
		i++;
	}
	return (b);
}
