/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_quads.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 13:35:52 by emihoubi          #+#    #+#             */
/*   Updated: 2016/09/22 15:22:04 by emihoubi         ###   ########.fr       */
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

void	ft_draw_frst_quad(img_var img, fdf_var lst)
{
	if (img.x >= img.y)
	{
		img.e = img.x;
		while (img.x1++ < img.x2)
		{
			ft_img_pixel_put(img, lst, img.x1, img.y1);
			img.e = img.e - img.dy;
			if (img.e < 0)
			{
				img.y1++;
				img.e = img.e + img.dx;
			}
		}
		return ;
	}
	img.e = img.y;
	while (img.y1++ < img.y2)
	{
		ft_img_pixel_put(img, lst, img.x1, img.y1);
		img.e = img.e - img.dx;
		if (img.e < 0)
		{
			img.x1++;
			img.e = img.e + img.dy;
		}
	}
}

void	ft_draw_last_quad(img_var img, fdf_var lst)
{
	if (img.x >= -img.y)
	{
		img.e = img.x;
		while (img.x1++ < img.x2)
		{
			ft_img_pixel_put(img, lst, img.x1, img.y1);
			img.e = img.e + img.dy;
			if (img.e < 0)
			{
				img.y1--;
				img.e = img.e + img.dx;
			}
		}
		return ;
	}
	img.e = img.y;
	while (img.y1-- > img.y2)
	{
		ft_img_pixel_put(img, lst, img.x1, img.y1);
		img.e = img.e + img.dx;
		if (img.e > 0)
		{
			img.x1++;
			img.e = img.e + img.dy;
		}
	} 
}

void	ft_draw_scnd_quad(img_var img, fdf_var lst)
{
	if (-img.x >= img.y)
	{
		img.e = img.x;
		while (img.x1-- > img.x2)
		{
			ft_img_pixel_put(img, lst, img.x1, img.y1);
			img.e = img.e + img.dy;
			if (img.e >= 0)
			{
				img.y1++;
				img.e = img.e + img.dx;
			}
		}
		return ;
	}
	img.e = img.y;
	while (img.y1++ < img.y2)
	{
		ft_img_pixel_put(img, lst, img.x1, img.y1);
		img.e = img.e + img.dx;
		if (img.e <= 0)
		{
			img.x1--;
			img.e = img.e + img.dy;
		}
	}
}

void	ft_draw_thrd_quad(img_var img, fdf_var lst)
{
	if (img.x <= img.y)
	{
		img.e = img.x;
		while (img.x1-- > img.x2)
		{
			ft_img_pixel_put(img, lst, img.x1, img.y1);
			img.e = img.e - img.dy;
			if (img.e >= 0)
			{
				img.y1--;
				img.e = img.e + img.dx;
			}
		}
		return ;
	}
	img.e = img.y;
	while (img.y1-- > img.y2)
	{
		ft_img_pixel_put(img, lst, img.x1, img.y1);
		img.e = img.e - img.dx;
		if (img.e >= 0)
		{
			img.x1--;
			img.e = img.e + img.dy;
		}
	}
}
