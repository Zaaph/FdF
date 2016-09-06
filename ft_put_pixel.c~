/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pixel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 13:35:52 by emihoubi          #+#    #+#             */
/*   Updated: 2016/09/05 17:20:45 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_img_pixel_put(img_var img, fdf_var lst)
{
	int	i;

	i = img.y * lst.sizeline + img.x * (lst.bpp / 8);
	img.b = ((img.color & 0xFF));
	img.r = ((img.color & 0xFF0000) >> 16);
	img.g = ((img.color & 0xFF00) >> 8);

	lst.data[i] = img.b;
	lst.data[++i] = img.g;
	lst.data[++i] = img.r;
}

void	ft_draw_line(img_var img, fdf_var lst)
{
	
}

int	main()
{
	fdf_var	lst;
	img_var img;
	int		x;
	char	*y;

	lst.mlx = mlx_init();
	lst.winwth = 500;
	lst.winght = 500;
	lst.bpp = 8;
	img.width = 250;
	img.height = 250;
	img.x = 125;
	img.y = 125;
	lst.sizeline = (lst.bpp * img.width) / 8;
	lst.win = mlx_new_window(lst.mlx, lst.winwth, lst.winght, "test");
	img.img = mlx_new_image(lst.mlx, img.width, img.height);
	lst.data = mlx_get_data_addr(img.img, &lst.bpp, &lst.sizeline, &lst.endian);
	img.color = mlx_get_color_value(lst.mlx, BROWN);
	while (img.y < 250)
	{
		ft_img_pixel_put(img, lst);
		img.y++;
		if (img.y == 250 && img.x < 250)
		{
			img.y = 125;
			img.x++;
		}
	}
	mlx_put_image_to_window(lst.mlx, lst.win, img.img, 125, 125);
	mlx_loop(lst.mlx);
	return (0);
}
