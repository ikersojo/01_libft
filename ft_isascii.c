/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 07:08:26 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/02 07:08:26 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
isascii() checks whether c is a 7-bit unsigned char value that fits into the
ASCII character set. The function returns zero if the character tests false and
returns non-zero if the character tests true.
---------------------------------------------------------------------------- */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
