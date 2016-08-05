/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 14:21:31 by emihoubi          #+#    #+#             */
/*   Updated: 2016/01/11 15:07:43 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void	const *content, size_t content_size)
{
	t_list *ptr;

	if (!(ptr = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (ptr)
	{
		if (content)
		{
			ptr->content = (t_list*)malloc(content_size);
			if (!ptr->content)
			{
				free(ptr);
				return (NULL);
			}
			ptr->content = ft_memcpy(ptr->content, content, content_size);
			ptr->content_size = content_size;
		}
		else
		{
			ptr->content = NULL;
			ptr->content_size = 0;
		}
		ptr->next = NULL;
	}
	return (ptr);
}
