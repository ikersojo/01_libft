/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 07:29:23 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/02 07:29:23 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Outputs the string s to the file descriptor fd.
---------------------------------------------------------------------------- */
void	ft_putstr_fd(char const *s, int fd)
{
	size_t	i;

	i = 0;
	while (*(s + i))
		ft_putchar_fd(*(s + i++), fd);
}
