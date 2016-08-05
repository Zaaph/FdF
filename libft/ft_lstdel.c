/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 14:50:12 by emihoubi          #+#    #+#             */
/*   Updated: 2015/12/30 14:50:16 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*next;

	if (*alst == NULL)
		return ;
	del((*alst)->content, (*alst)->content_size);
	next = (*alst)->next;
	free(*alst);
	while (next)
	{
		del(next->content, next->content_size);
		tmp = next;
		next = next->next;
	}
	free(tmp);
	*alst = NULL;
}
