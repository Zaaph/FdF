/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pixel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emihoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 13:35:52 by emihoubi          #+#    #+#             */
/*   Updated: 2016/08/03 15:43:39 by emihoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <mlx.h>

int	ft_segment(int x1, int y1, int x2, int y2)
{
	int	x;
	
	x = x1;
	while (x1 <= x2)
	{
		mlx_pixel_put(
	}
}

int	main()
{
	void	*mlx;
	void	*win;
	int		x;
	int		y;
	
	sizeline = (bpp/8) * 300;
	mlx = mlx_init();
	win = mlx_new_window(mlx, 500, 500, "test");
	
	mlx_loop(mlx);
	return (0);
}
