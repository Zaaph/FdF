/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 12:14:21 by emihoubi          #+#    #+#             */
/*   Updated: 2016/09/06 11:50:47 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define BLACK 0x000000
# define WHITE 0xFFFFFF
# define GREY 0x808080
# define BLUE 0x0000FF
# define RED 0xFF0000
# define GREEN 0x00FF00
# define ORANGE 0xFF8000
# define YELLOW 0xFFFF00
# define PURPLE 0x7F00FF
# define PINK 0xFF33FF
# define BROWN 0x663300
# include <stdio.h>
# include <mlx.h>


typedef	struct		fdf_var
{
	void			*mlx;
	void			*win;
	char			*data;
	int				x;
	int				y;
	int				winwth;
	int				winght;
	int				sizeline;
	int				bpp;
	int				endian;
}					fdf_var;

typedef	struct		img_var
{
	void			*img;
	int				height;
	int				width;
	int				x;
	int				y;
	int				x1;
	int				x2;
	int				y1;
	int				y2;
	int				r;
	int				g;
	int				b;
	unsigned long	color;
}					img_var;

void	ft_img_pixel_put(img_var img, fdf_var lst);

#endif
