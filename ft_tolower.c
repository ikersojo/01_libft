/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:27:58 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:27:58 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The tolower() function converts an upper-case letter to thecorresponding lower-
case letter.  The argument must be representable as an unsigned char or the
value of EOF.
If the argument is an upper-case letter, the tolower() function returns the
corresponding lower-case letter if there is one; otherwise, the argument is
returned unchanged.
---------------------------------------------------------------------------- */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
