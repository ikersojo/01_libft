/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:19:50 by isojo-go          #+#    #+#             */
/*   Updated: 2022/08/05 13:19:50 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
Outputs the char c to the file descriptor fd.
----------------------------------------------------------------------------- */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}