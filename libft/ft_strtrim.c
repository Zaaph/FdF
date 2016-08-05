/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:19:33 by emihoubi          #+#    #+#             */
/*   Updated: 2016/01/13 13:59:02 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	trimdef(size_t *i, int *j, size_t *k, char const *s)
{
	*i = 0;
	*j = 0;
	*k = ft_strlen(s);
}

static void	secondtrimdef(size_t *k, size_t *i, size_t *x)
{
	*k -= *i;
	*x = *i;
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	int		j;
	size_t	k;
	size_t	x;

	trimdef(&i, &j, &k, s);
	x = k;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		i++;
	if (i == k)
		return ("\0");
	while (s[k] == ' ' || s[k] == '\t' || s[k] == '\n' || s[k] == '\0')
		k--;
	secondtrimdef(&k, &i, &x);
	if (!(str = (char*)malloc(k + 2)) || !s)
		return (NULL);
	while (i <= k + x)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
