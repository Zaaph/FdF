/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pixel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 13:35:52 by emihoubi          #+#    #+#             */
/*   Updated: 2016/08/05 16:56:34 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_img_pixel_put(var_lst lst)
{
	lst.color1 = (lst.img_color & 0xFF0000) >> 24;
	lst.color2 = (lst.img_color & 0xFF0000) >> 16;
	lst.color3 = (lst.img_color & 0xFF0000) >> 8;

	lst.data[lst.y * lst.sizeline + lst.x * lst.bpp / 8] = lst.color1;
	lst.data[lst.y * lst.sizeline + lst.x * lst.bpp / 8 + 1] = lst.color2;
	lst.data[lst.y * lst.sizeline + lst.x * lst.bpp / 8 + 2] = lst.color3;
}

int	main()
{
	var_lst	lst;
	int		x;
	char	*y;

	lst.mlx = mlx_init();
	lst.winwth = 500;
	lst.winght = 500;
	lst.bpp = 8;
	lst.imgwth = 250;
	lst.imgght = 250;
	lst.img_x = 125;
	lst.img_y = 125;
	lst.sizeline = (lst.bpp * lst.imgwth) / 8;
	y = (char*)&x;
	if (*y+48 == 0)
		lst.endian = 1;
	else
		lst.endian = 0;
	lst.win = mlx_new_window(lst.mlx, lst.winwth, lst.winght, "test");
	lst.img = mlx_new_image(lst.mlx, lst.imgwth, lst.imgght);
	lst.data = mlx_get_data_addr(lst.img, &lst.bpp, &lst.sizeline, &lst.endian);
	lst.img_color = mlx_get_color_value(lst.mlx, BROWN);
	while (lst.y < 200)
	{
		lst.x = 125;
		while (lst.x < 125)
		{
			ft_img_pixel_put(lst);
			lst.x++;
		}
		lst.y++;
	}
	mlx_put_image_to_window(lst.mlx, lst.win, lst.img, lst.img_x, lst.img_y);
	mlx_loop(lst.mlx);
	return (0);
}
