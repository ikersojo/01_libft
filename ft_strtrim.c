/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:50:39 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/02 17:50:39 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ischarset(char c, char *set)
{
	size_t	i;

	i = 0;
	while (*(set + i))
	{
		if (*(set + i) == c)
			return (1);
		i++;
	}
	return (0);
}

/* DESCRIPTION:
Allocates (with malloc(3)) and returns a copy of the string given as argument
without the characters in set at the beginning or at the end of the string.
If the allocation fails the function returns NULL.
---------------------------------------------------------------------------- */
char	*ft_strtrim(char *s1, char *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*new;

	len = ft_strlen(s1);
	new = (char *) malloc(len + 1);
	if (new == NULL)
		return (NULL);
	len--;
	while (len > 0 && ft_ischarset(*(s1 + len), set))
		len--;
	if (len == 0)
	{
		*new = '\0';
		return (new);
	}
	i = 0;
	while (ft_ischarset(*(s1 + i), set))
		i++;
	j = 0;
	while (i <= len)
		*(new + j++) = *(s1 + i++);
	*(new + j) = '\0';
	return (new);
}
