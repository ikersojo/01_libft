/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:24:26 by isojo-go          #+#    #+#             */
/*   Updated: 2022/09/09 15:24:26 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Outputs the char c to the file descriptor fd.
---------------------------------------------------------------------------- */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
