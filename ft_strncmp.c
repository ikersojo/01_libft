/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:26:49 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:26:49 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The strncmp() function lexicographically compares not more than n characters
in the null-terminated strings s1 and s2. Characters that appear after a ‘\0’
character are not compared.
It return an integer greater than, equal to, or less than 0, according as the
string s1 is greater than, equal to, or less than the string s2.
The comparison is done using unsigned characters.
---------------------------------------------------------------------------- */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (*(s1 + i) && *(s2 + i) && *(s1 + i) == *(s2 + i) && (i < n - 1))
		i++;
	return ((unsigned char)(*(s1 + i)) - (unsigned char)(*(s2 + i)));
}
