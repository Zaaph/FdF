/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:00:15 by emihoubi          #+#    #+#             */
/*   Updated: 2015/12/02 15:00:22 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *i;

	if (size > 2147483647)
		return (NULL);
	if (!(i = (void*)malloc(sizeof(*i) * size + 1)))
		return (NULL);
	ft_bzero(i, size);
	return (i);
}
