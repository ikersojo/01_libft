/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:28:04 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:28:04 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The toupper() function converts a lower-case letter to the corresponding upper-
case letter.  The argument must be representable as an unsigned char or the
value of EOF.
If the argument is a lower-case letter, the toupper() function returns the
corresponding upper-case letter if there is one; otherwise, the argument is
returned unchanged.
---------------------------------------------------------------------------- */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
