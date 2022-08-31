/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:06:57 by isojo-go          #+#    #+#             */
/*   Updated: 2022/08/05 13:06:57 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* DESCRIPTION:
The calloc() function allocates memory for an array of nmemb elements of size
bytes each and returns a pointer to the allocated memory. The memory is set to
zero. If nmemb or size is 0, then calloc() returns either NULL, or a unique
pointer value that can later be successfully passed to free().
----------------------------------------------------------------------------- */
void	*calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (prt == NULL)
		return (NULL);
	ft_bzero(prt, nmemb * size);
	return (prt);
}