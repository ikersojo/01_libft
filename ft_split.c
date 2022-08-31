/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:21:18 by isojo-go          #+#    #+#             */
/*   Updated: 2022/08/05 13:21:18 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wc(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (*(s + i))
	{
		if ((*(s + i) != c && i == 0)
			|| (*(s + i) != c && *(s + i - 1) == c && i != 0))
			count++;
		i++;
	}
	return (count);
}

/* DESCRIPTION:
Allocates (with malloc(3)) and returns an array of strings obtained by spliting
s using the character c as a delimiter. The array must be ended by a NULL
pointer. If the allocation fails the function returns NULL.
----------------------------------------------------------------------------- */
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**array;
	char	*word;

	array = (char **) malloc(sizeof(char *) * (ft_wc(s, c) + 1));
	if (array == NULL || s == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (*(s + i))
	{
		if ((*(s + i) != c && i == 0)
			|| (*(s + i) != c && *(s + i - 1) == c && i != 0))
		{
			word = (char *) malloc(ft_strlen(s) + 1);
			*(array + j++) = word;
			while (*(s + i) && *(s + i) != c)
				*word++ = *(s + i++);
			*word = '\0';
		}
		i++;
	}
	**(array + j) =(char *) malloc(1);
	**(array + j) = '\0';
	return (array);
}