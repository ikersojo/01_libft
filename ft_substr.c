/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 07:51:44 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/02 07:55:10 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Allocates (with malloc) and returns a new substring from the string s. The
substring begins at index start and is of size len. If start and len aren’t
refering to a valid substring, the behavior is undefined.
If the allocation fails, the function returns NULL.
---------------------------------------------------------------------------- */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	size;

	if (s == NULL)
		return (NULL);
	size = len + 1;
	if ((ft_strlen(s) + 1 - start) < (len + 1))
		size = ft_strlen(s) + 1 - start;
	sub = (char *) malloc(size);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, size);
	return (sub);
}
