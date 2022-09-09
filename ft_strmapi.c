/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:26:40 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:37:26 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Applies the function f to each character of the string s passed as argument by
giving its index as first argument to create a “fresh” new string (with malloc)
resulting from the successive applications of f.
If the allocation fails the function returns NULL.
---------------------------------------------------------------------------- */
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new;

	if (f == NULL)
		return (NULL);
	new = (char *)malloc(ft_strlen(s) + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(new + i) = f(i, *(s + i));
		i++;
	}
	*(new + i) = '\0';
	return (new);
}
