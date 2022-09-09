/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:26:06 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:26:06 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Allocates (with malloc(3)) and returns a new string ending with ’\0’, result of
the concatenation of s1 and s2. If the allocation fails returns NULL.
---------------------------------------------------------------------------- */
char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*join;

	join = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (join == NULL)
		return (NULL);
	i = 0;
	while (*(s1 + i))
	{
		*(join + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (*(s2 + j))
		*(join + i++) = *(s2 + j++);
	*(join + i) = '\0';
	return (join);
}
