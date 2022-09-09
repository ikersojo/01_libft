/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:18:55 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:18:55 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
The isalpha() function tests for any character for which isupper or islower is
 true. The value of the argument must be representable as an unsigned char or
 the value of EOF.
 The isalpha() function returns zero if the character tests false and returns
 non-zero if the character tests true.
---------------------------------------------------------------------------- */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
