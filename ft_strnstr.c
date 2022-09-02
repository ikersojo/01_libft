/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 07:49:06 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/02 07:49:06 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The strnstr() function locates the first occurrence of null-terminated string
needle in the null-terminated string haystack, where not more than n characters
are searched.
If needle is an empty string, haystack is returned;
if needle occurs nowhere in haystack, NULL is returned;
otherwise a pointer to the first character of the first occurrence of needle is
returned.
---------------------------------------------------------------------------- */
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	len;
	size_t	i;
	size_t	j;

	if (!(*needle))
		return (haystack);
	len = ft_strlen(needle);
	i = 0;
	while (*(haystack + i) && (i < n))
	{
		j = 0;
		while (*(needle + j) && *(haystack + i) == *(needle + j) && (i < n))
		{
			i++;
			j++;
		}
		if (j == len)
			return (haystack + i - j);
		i++;
	}
	return (NULL);
}
