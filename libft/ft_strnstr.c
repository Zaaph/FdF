/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:19:54 by emihoubi          #+#    #+#             */
/*   Updated: 2016/01/13 16:45:49 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	if (s2[0] == '\0')
		return ((char*)s1);
	while (s1[++i] && i < n && s1[0] != '\0')
	{
		while (s1[i] && s2[j] && s1[i] != s2[j] && i < n)
			i++;
		if (s1[i] == 0 && s1[i + 1] != '\0')
			break ;
		while (s1[i] && s2[j] && s2[j] == s1[i + j] &&
				(i + j) < n)
		{
			j++;
			if ((!s2[j] || !s1[i + j]) && j == ft_strlen(s2))
				return ((char*)&s1[i]);
		}
		j = 0;
	}
	return (NULL);
}
