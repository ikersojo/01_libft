/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:18:48 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:18:48 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
The isalnum() function tests for any character for which isalpha or isdigit is
true. The value of the argument must be representable as an unsigned char or
the value of EOF.
The isalnum() function returns zero if the character tests false and returns
non-zero if the character tests true.
---------------------------------------------------------------------------- */
int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
