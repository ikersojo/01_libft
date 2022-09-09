/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:25:14 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:25:14 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_array(char **array)
{
	int	i;

	i = 0;
	while (*(array + i))
		free(*(array + i++));
	free(array);
	return (NULL);
}

static int	ft_wc(const char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	if (s == NULL)
		return (0);
	i = 0;
	while (*(s + i) && *(s + i) == c)
		i++;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	ft_locate_word(char **str, int *str_len, char c)
{
	int	i;

	*str += *str_len;
	*str_len = 0;
	i = 0;
	while (**str && **str == c)
		(*str)++;
	while (*(*str + i))
	{
		if (*(*str + i) == c)
			return ;
		(*str_len)++;
		i++;
	}
}

/* DESCRIPTION:
Allocates (with malloc(3)) and returns an array of strings obtained by spliting
s using the character c as a delimiter. The array must be ended by a NULL
pointer. If the allocation fails the function returns NULL.
---------------------------------------------------------------------------- */
char	**ft_split(const char *s, char c)
{
	char	**array;
	int		i;
	int		count;
	char	*str;
	int		word_len;

	if (s == NULL)
		return (NULL);
	count = ft_wc(s, c);
	array = (char **) malloc(sizeof(char *) * (count + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	str = (char *) s;
	word_len = 0;
	while (i < count)
	{
		ft_locate_word(&str, &word_len, c);
		*(array + i) = (char *) malloc((word_len + 1));
		if (*(array + i) == NULL)
			return (ft_free_array(array));
		ft_strlcpy(*(array + i++), str, word_len + 1);
	}
	*(array + i) = NULL;
	return (array);
}
