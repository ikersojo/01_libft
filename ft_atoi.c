/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:01:42 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/02 17:01:42 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

/* DESCRIPTION:
The atoi() function converts the initial portion of the string pointed by str
to int representation.
It skips any space before the numbers, accepts one single optional sign
character (+ or -) and considers the all digits afterwards.
---------------------------------------------------------------------------- */
int	ft_atoi(const char *str)
{
	unsigned int	n;
	int				sign;
	size_t			i;

	n = 0;
	i = 0;
	sign = 1;
	while (*(str + i) && ft_isspace(*(str + i)))
		i++;
	if (*(str + i) == '+' || *(str + i) == '-')
	{
		if (*(str + i) == '-')
			sign = -1;
		i++;
	}
	while (*(str + i) && ft_isdigit(*(str + i)))
	{
		n = n * 10 + (*(str + i) - '0');
		i++;
	}
	return (sign * n);
}
