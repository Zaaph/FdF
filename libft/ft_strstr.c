/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:58:22 by emihoubi          #+#    #+#             */
/*   Updated: 2016/01/12 12:57:21 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = -1;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[++i] && s1[0] != '\0' && ((j = 0) || 1))
	{
		while (s1[i] != s2[j] && s1[i] && s2[j])
			i++;
		if (s1[i] == 0 && s1[i + 1] != '\0')
			break ;
		while (s2[j] == s1[i + j] && s1[i] && s2[j])
		{
			if (s2[j] != s1[i + j])
				break ;
			j++;
			if (!s2[j])
				return ((char*)&s1[i]);
		}
		if (i > ft_strlen(s1))
			return (NULL);
		j = 0;
	}
	return (NULL);
}
