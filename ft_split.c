/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:29:55 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/02 17:29:55 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_new_word(const char *s, size_t i, char c)
{
	if (i == 0)
	{
		if ((*(s + i) != c))
			return (1);
	}
	else
	{
		if ((*(s + i) != c && *(s + i - 1) == c))
			return (1);
	}
	return (0);
}

static int	ft_wc(const char *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (*(s + i))
	{
		if (ft_new_word(s, i, c))
			count++;
		i++;
	}
	return (count);
}

static int	ft_word_len(const char *s, size_t i, char c)
{
	int	len;

	len = 0;
	while (*(s + i) && !ft_new_word(s, i, c))
	{
		len++;
		i++;
	}
	return (len);
}

/* DESCRIPTION:
Allocates (with malloc(3)) and returns an array of strings obtained by spliting
s using the character c as a delimiter. The array must be ended by a NULL
pointer. If the allocation fails the function returns NULL.
---------------------------------------------------------------------------- */
char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	char	**array;
	char	*word;

	array = (char **) malloc(sizeof(char *) * (ft_wc(s, c) + 1));
	if (array == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (*(s + i))
	{
		if (ft_new_word(s, i, c))
		{
			word = (char *) malloc(ft_word_len(s, i, c) + 1);
			*(array + j++) = word;
			while (*(s + i) && *(s + i) != c)
				*word++ = *(s + i++);
			*word = '\0';
		}
		i++;
	}
	**(array + j) = *((char *) malloc(1));
	**(array + j) = '\0';
	return (array);
}
