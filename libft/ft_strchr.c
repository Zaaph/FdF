/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:36:00 by emihoubi          #+#    #+#             */
/*   Updated: 2016/01/11 16:03:07 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *)s;
	if (!(s[i]))
		return (NULL);
	if (c == 0)
		return ((char *)&s2[ft_strlen(s2)]);
	while (s2[i])
	{
		if ((int)s2[i] == c)
			return ((char *)&s2[i]);
		i++;
	}
	return (NULL);
}
