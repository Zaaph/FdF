/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:40:10 by emihoubi          #+#    #+#             */
/*   Updated: 2015/11/30 13:55:56 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;
	size_t c;

	i = ft_strlen(s1);
	j = 0;
	c = 0;
	if (n > 0)
	{
		while (s2[j] && c < n)
		{
			s1[i++] = s2[j++];
			c++;
		}
	}
	s1[i] = '\0';
	return (s1);
}
