/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:13:58 by isojo-go          #+#    #+#             */
/*   Updated: 2022/08/05 13:13:58 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static void ft_nbr(int n, char *str, size_t *i)
{
	if (n < 0)
	{
		*(str + *i) = '-';
		(*i)++;
	}
	if (ft_abs(n) >= 0 && ft_abs(n) <= 9)
	{
		*(str + *i) = ft_abs(n) + '0';
		(*i)++;
	}
	else
	{
		ft_putnbr(ft_abs(n / 10), str, &i);
		ft_putnbr(ft_abs(n % 10), str, &i);
	}
}

/* DESCRIPTION:
Allocate (with malloc(3)) and returns a new string (ending with ’\0’)
representing the integer n given as argument. Negative numbers must be
supported. If the allocation fails, the function returns NULL.
----------------------------------------------------------------------------- */
char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;

	str = (char *) malloc(12);
	if (str == NULL)
		return (NULL);
	i = 0;
	ft_nbr(n, str, &i);
	return (str);
}




