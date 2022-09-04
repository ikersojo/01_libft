/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:10:22 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/02 17:10:22 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
The isprint() function tests for any printing character, including space (‘ ’).
The value of the argument must be representable as an unsigned char or the
value of EOF.
Function returns zero if the character tests false and returns non-zero if
tests true.
---------------------------------------------------------------------------- */
int	ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
