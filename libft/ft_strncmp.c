/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:08:55 by emihoubi          #+#    #+#             */
/*   Updated: 2016/01/11 16:12:34 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n > 1)
		n--;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s2[i] && s1[i] && n--)
		i++;
	if (n == 0 || s1[i] != s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
