/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pixel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 13:35:52 by emihoubi          #+#    #+#             */
/*   Updated: 2016/09/19 19:08:06 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "fdf.h"

void	ft_img_pixel_put(img_var img, fdf_var lst, int x, int y)
{
	int	i;

	i = y * lst.sizeline + x * (lst.bpp / 8);
	img.b = ((img.color & 0xFF));
	img.r = ((img.color & 0xFF0000) >> 16);
	img.g = ((img.color & 0xFF00) >> 8);

	lst.data[i] = img.b;
	lst.data[++i] = img.g;
	lst.data[++i] = img.r;
}

void	ft_draw_ver_n_hor(img_var img, fdf_var lst)
{
	while (img.y1 < img.y2)
	{
		ft_img_pixel_put(img, lst, img.x1, img.y1);
		img.y1++;
	}
	while (img.y2 < img.y1)
	{
		ft_img_pixel_put(img, lst, img.x1, img.y1);
		img.y1--;
	}
	while (img.x1 < img.x2)
	{
		ft_img_pixel_put(img, lst, img.x1, img.y1);
		img.x1++;
	}
	while (img.x2 < img.x1)
	{
		ft_img_pixel_put(img, lst, img.x1, img.y1);
		img.x1--;
	}
}

void	ft_draw_line(img_var img, fdf_var lst)
{
	int	e;

	e = img.x2 - img.x1;
	img.dx = e * 2;
	img.dy = (img.y2 - img.y1) * 2;
	if (img.dx == 0)
	{
		ft_draw_ver_n_hor(img, lst);
		return ;
	}
	if (img.dy == 0)
	{
		ft_draw_ver_n_hor(img, lst);
		return ;
	}
	while (img.x1 < img.x2)
	{
		ft_img_pixel_put(img, lst, img.x1, img.y1);
		img.x1++;
		if (e - img.dy <= 0)
		{
			e = e - img.dy;
			img.y1++;
			e = e + img.dx;
		}
		else
			e = e - img.dy;
	}
}

int	main()
{
	fdf_var	lst;
	img_var img;
	int		x;
	char	*y;

	lst.mlx = mlx_init();
	lst.winwth = 600;
	lst.winght = 600;
	lst.bpp = 8;
	img.width = 600;
	img.height = 600;
	img.x1 = 500;
	img.x2 = 200;
	img.y1 = 200;
	img.y2 = 200;
	lst.sizeline = (lst.bpp * img.width) / 8;
	lst.win = mlx_new_window(lst.mlx, lst.winwth, lst.winght, "test");
	img.img = mlx_new_image(lst.mlx, img.width, img.height);
	lst.data = mlx_get_data_addr(img.img, &lst.bpp, &lst.sizeline, &lst.endian);
	img.color = mlx_get_color_value(lst.mlx, PINK);
	ft_draw_line(img, lst);
	/*ft_img_pixel_put(img, lst, 300, 300);*/
	mlx_put_image_to_window(lst.mlx, lst.win, img.img, 0, 0);
	mlx_loop(lst.mlx);
	return (0);
}
