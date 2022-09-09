/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:27:28 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:37:26 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ischarset(char c, const char *set)
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
char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	end;
	char	*new;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (*(s1 + i) && ft_ischarset(*(s1 + i), set))
		i++;
	end = (int) ft_strlen(s1);
	while (end > i && ft_ischarset(*(s1 + end - 1), set))
		end--;
	new = (char *)malloc(end - i + 1);
	if (new == NULL)
		return (NULL);
	j = 0;
	while (i < end)
		*(new + j++) = *(s1 + i++);
	*(new + j) = '\0';
	return (new);
}
