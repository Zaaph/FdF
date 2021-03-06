/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:09:07 by emihoubi          #+#    #+#             */
/*   Updated: 2016/09/22 15:28:21 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_draw_vert(img_var img, fdf_var lst)
{
	while (img.y1 < img.y2 && img.dx == 0)
	{
		ft_img_pixel_put(img, lst, img.x1, img.y1);
		img.y1++;
	}
	while (img.y2 < img.y1 && img.dx == 0)
	{
		ft_img_pixel_put(img, lst, img.x1, img.y1);
		img.y1--;
	}
}

void	ft_draw_line(img_var img, fdf_var lst)
{
	img.e = img.x2 - img.x1;
	img.x = img.e;
	img.y = img.y2 - img.y1;
	img.dx = img.x * 2;
	img.dy = img.y * 2;
	if (img.x > 0)
	{
		if (img.y > 0)
			ft_draw_frst_quad(img, lst);
		else
			ft_draw_last_quad(img, lst);
	}
	if (img.x < 0)
	{
		if (img.y > 0)
			ft_draw_scnd_quad(img, lst);
		else
			ft_draw_thrd_quad(img, lst);
	}
	if (img.dx == 0)
		ft_draw_vert(img, lst);
}
