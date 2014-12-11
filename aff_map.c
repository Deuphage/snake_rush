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

void	aff_map(char **map, t_game *snake)
{
	int y;
	int x;

	y = 0;
	while (y < snake->y_map)
	{
		x = 0;
		while (x < snake->x_map + 1)
		{
			ft_putchar(map[y][x]);
			x++;
		}
		y++;
	}
}
