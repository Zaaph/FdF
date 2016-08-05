/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 12:14:21 by emihoubi          #+#    #+#             */
/*   Updated: 2016/08/05 16:53:51 by emihoubi         ###   ########.fr       */
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
	void			*img;
	char			*data;
	int				x;
	int				y;
	int				winwth;
	int				winght;
	int				imgwth;
	int				imgght;
	int				sizeline;
	int				bpp;
	int				endian;
	int				img_x;
	int				img_y;
	unsigned char	color1;
	unsigned char	color2;
	unsigned char	color3;
	unsigned long	img_color;
}					var_lst;


#endif
