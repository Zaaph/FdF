/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/26 14:29:27 by emihoubi          #+#    #+#             */
/*   Updated: 2016/05/26 14:49:34 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strndup(char *str, int len)
{
	int		i;
	char	*dup;

	i = 0;
	if (!(dup = (char*)malloc(sizeof(char) * ft_strlen(str) + 1)))
		return (NULL);
	while (str[i] && i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
