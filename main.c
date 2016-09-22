/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 16:11:20 by emihoubi          #+#    #+#             */
/*   Updated: 2016/09/22 15:29:29 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main()
{
	fdf_var lst;
	img_var img;

	lst.mlx = mlx_init();
	lst.winwth = 1000;
	lst.winght = 1000;
	lst.bpp = 8;
	img.width = 900;
	img.height = 900;
	img.x1 = 200;
	img.x2 = 200;
	img.y1 = 400;
	img.y2 = 800;
	lst.sizeline = (lst.bpp * img.width) / 8;
	lst.win = mlx_new_window(lst.mlx, lst.winwth, lst.winght, "test");
	img.img = mlx_new_image(lst.mlx, img.width, img.height);
	lst.data = mlx_get_data_addr(img.img, &lst.bpp, &lst.sizeline, &lst.endian);
	img.color = mlx_get_color_value(lst.mlx, PINK);
	ft_draw_line(img, lst);
	mlx_put_image_to_window(lst.mlx, lst.win, img.img, 50, 50);
	mlx_loop(lst.mlx);
	return (0);
}
