/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:15:17 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/04 20:40:34 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_maxlen(const char *s, unsigned int start, size_t len)
{
	size_t	count;

	count = 0;
	if (start > ft_strlen(s))
		return (0);
	while (*(s + start++))
		count++;
	if (count < len)
		return (count);
	return (len);
}

/* DESCRIPTION:
Allocates (with malloc) and returns a new substring from the string s. The
substring begins at index start and is of size len. If start and len aren’t
refering to a valid substring, the behavior is undefined.
If the allocation fails, the function returns NULL.
---------------------------------------------------------------------------- */
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;
	size_t	sub_len;

	sub_len = ft_maxlen(s, start, len);
	sub = (char *) malloc(sub_len + 1);
	if (s == NULL || sub == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (*(s + i) && j < sub_len)
		*(sub + j++) = *(s + i++);
	*(sub + j) = '\0';
	return (sub);
}
