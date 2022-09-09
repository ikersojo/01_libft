/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:25:28 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:25:28 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The strchr() function locates the first occurrence of c (converted to a char)
in the string pointed to by s. The terminating null character is considered to
be part of the string;
therefore if c is ‘\0’, the functions locate the terminating ‘\0’.
The function returns a pointer to the located character, or NULL if the char
does not appear in the string.
---------------------------------------------------------------------------- */
char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}
