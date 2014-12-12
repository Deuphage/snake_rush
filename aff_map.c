/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/11 10:46:02 by kescalie          #+#    #+#             */
/*   Updated: 2014/12/11 11:09:22 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "snake.h"
#include <stdio.h>

void	aff_map(t_map *g_map)
{
	int y;
	int x;

	y = 0;
	while (y < g_map->y_map)
	{
		x = 0;
		while (x < g_map->x_map) //+1
		{
			ft_putchar(g_map->map[y][x]);
			//printf("x=%d, y=%d | %c\n", x, y, map[y][x]);
			x++;
		}
		ft_putchar('\n');
		y++;
	}

}
