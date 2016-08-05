/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:34:22 by emihoubi          #+#    #+#             */
/*   Updated: 2015/12/24 14:30:28 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst2;
	unsigned char	*ptr;

	ptr = (void *)src;
	dst2 = dst;
	if (dst > src)
	{
		ptr = ptr + len;
		dst2 = dst2 + len;
		while (len > 0)
		{
			*--dst2 = *--ptr;
			len--;
		}
	}
	if (src > dst)
		ft_memcpy(dst, src, len);
	return (dst);
}
