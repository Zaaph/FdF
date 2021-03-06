/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 11:38:49 by emihoubi          #+#    #+#             */
/*   Updated: 2016/08/03 11:48:22 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

# define BUFF_SIZE 8

int					get_next_line(int const fd, char **line);

typedef	struct		s_get
{
	int				nb_read;
	int				fd;
	int				i;
	char			*read;
	struct s_get	*next;
}					t_get;

#endif
