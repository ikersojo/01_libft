/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:43:11 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/02 18:56:26 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Applies the function f to each character of the string passed as argument, and
passing its index as first argument. Each character is passed by address to f
to be modified if necessary.
---------------------------------------------------------------------------- */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (f != NULL)
	{
		i = 0;
		while (*(s + i))
		{
			f(i, s + i);
			i++;
		}
	}
}
