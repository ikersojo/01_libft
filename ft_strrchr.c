/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:27:16 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:27:16 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The strchr() function locates the last occurrence of c (converted to a char) in
the string pointed to by s. The terminating null character is considered to be
part of the string;
therefore if c is ‘\0’, the functions locate the terminating ‘\0’.
The function returns a pointer to the located character, or NULL if the char
does not appear in the string.
---------------------------------------------------------------------------- */
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (*(s + i) == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
