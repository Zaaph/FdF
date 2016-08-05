/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:51:16 by emihoubi          #+#    #+#             */
/*   Updated: 2016/01/11 15:04:32 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_cntchar(int n)
{
	int	c;

	c = 1;
	if (n < 0)
	{
		c++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

static void		ft_putnbrinstr(int n, char *str, int *i)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			str = ft_strdup("-2147483648");
			return ;
		}
		n = -n;
		str[0] = '-';
		*i = *i + 1;
	}
	if (n > 9)
	{
		ft_putnbrinstr(n / 10, str, i);
		ft_putnbrinstr(n % 10, str, i);
	}
	if (n < 10)
	{
		str[*i] = n + '0';
		*i = *i + 1;
	}
	str[*i] = '\0';
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * (ft_cntchar(n) + 1))))
		return (NULL);
	if (n > 2147483647 || n < -2147483648)
		return (NULL);
	if (n == -2147483648)
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
	ft_putnbrinstr(n, str, &i);
	return (str);
}
