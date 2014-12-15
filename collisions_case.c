/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collisions_case.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 18:19:08 by kescalie          #+#    #+#             */
/*   Updated: 2014/12/12 18:19:09 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "snake.h"
#include "libft/libft.h"
int		collisions_case(t_game *snake, t_map *g_map, int way)
{
	if (g_map->map[snake->y_s][snake->x_s] != ' ')
	{
		ft_putendl("collision");
		if (g_map->map[snake->y_s][snake->x_s] == 'H')
		{
			ft_putendl("porte");
			snake->x_s = 1;
			snake->y_s = 1;
			g_map->map[snake->y_s][snake->x_s] = 's';
			return (1);
		}
		else if (g_map->map[snake->y_s][snake->x_s] == 'A')
			ft_putendl("sortie");
		else if (g_map->map[snake->y_s][snake->x_s] == '#')
			snake->pv_s -= 1;
		switch (way)
		{
			case 1:
			snake->x_s += 1;
			break;

			case 2:
			snake->y_s += 1;
			break;

			case 3:
			snake->y_s -= 1;
			break;

			case 4:
			snake->x_s -= 1;
			break;
		}
	}
	g_map->map[snake->y_s][snake->x_s] = 's';
	return (0);
}