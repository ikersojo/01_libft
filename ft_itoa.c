/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:20:53 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:37:26 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digitcount(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static char	*min_int_str(void)
{
	char	*str;

	str = malloc(12);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, "-2147483648", 12);
	return (str);
}

static char	*zero_str(void)
{
	char	*str;

	str = malloc(2);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, "0", 2);
	return (str);
}

static void	ft_initialize(int *sign, int *digits, int *n)
{
	*sign = 0;
	if (*n < 0)
	{
		*sign = 1;
		*n = *n * -1;
	}
	*digits = ft_digitcount(*n) + *sign;
}

/* DESCRIPTION:
Allocate (with malloc(3)) and returns a new string (ending with ’\0’)
representing the integer n given as argument. Negative numbers must be
supported. If the allocation fails, the function returns NULL.
---------------------------------------------------------------------------- */
char	*ft_itoa(int n)
{
	char	*str;
	int		digits;
	int		sign;

	if (n == -2147483648)
		return (min_int_str());
	if (n == 0)
		return (zero_str());
	ft_initialize(&sign, &digits, &n);
	str = (char *)malloc(digits + 1);
	if (str == NULL)
		return (NULL);
	*(str + digits) = '\0';
	while (n > 0)
	{
		*(str + (--digits)) = (n % 10) + '0';
		n = n / 10;
	}
	if (sign == 1)
		*(str) = '-';
	return (str);
}
