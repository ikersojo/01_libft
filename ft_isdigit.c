/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:19:51 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:19:51 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
The isdigit() function tests for a decimal digit character. Regardless of
locale, this includes the following characters only: '0' through'9'. The
function returns zero if the character tests false and returns non-zero if the
character tests true.
The value of the argument must be representable as an unsigned char or the
value of EOF.
The isnumber() function behaves similarly to isdigit(), but may recognize
additional characters, depending on the current locale setting.
---------------------------------------------------------------------------- */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
