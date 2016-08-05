/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:09:42 by emihoubi          #+#    #+#             */
/*   Updated: 2016/01/11 17:32:07 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s2;

	i = ft_strlen(s);
	s2 = (char *)s;
	if (c == 0)
		return ((char *)&s2[i]);
	while (i >= 0)
	{
		if ((int)s2[i] == c)
			return ((char *)&s2[i]);
		i--;
	}
	return (NULL);
}
