/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:51:44 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/03 11:45:54 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Allocates (with malloc) and returns a new substring from the string s. The
substring begins at index start and is of size len. If start and len aren’t
refering to a valid substring, the behavior is undefined.
If the allocation fails, the function returns NULL.
---------------------------------------------------------------------------- */
char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	sub = (char *) malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (*(s + i) && j < len)
	{
		if (i >= start)
		{
			*(sub + j) = *(s + i);
			j++;
		}
		i++;
	}
	*(sub + j) = '\0';
	return (sub);
}
