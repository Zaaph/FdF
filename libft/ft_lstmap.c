/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 14:22:01 by emihoubi          #+#    #+#             */
/*   Updated: 2016/01/04 14:22:04 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*res;
	t_list	*tmp;

	fresh = NULL;
	while (lst)
	{
		tmp = f(lst);
		if (!fresh)
		{
			fresh = tmp;
			res = fresh;
			fresh->next = NULL;
		}
		else
		{
			fresh->next = tmp;
			tmp->next = NULL;
			fresh = fresh->next;
		}
		lst = lst->next;
	}
	return (res);
}
