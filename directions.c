/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   directions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/11 18:02:21 by kescalie          #+#    #+#             */
/*   Updated: 2014/12/11 18:11:28 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "snake.h"
#include "libft/libft.h"

int	go_left(t_game *snake, t_map *g_map)
{
	int way = 1;
	g_map->map[snake->y_s][snake->x_s] = ' ';
	snake->x_s -= 1;
	if (collisions_case(snake, g_map, way))
		return (1);
	// ft_putnbr(snake->x_s);
	return (0);
}

int	go_up(t_game *snake, t_map *g_map)
{
	int way = 2;
	g_map->map[snake->y_s][snake->x_s] = ' ';
	snake->y_s -= 1;
	if (collisions_case(snake, g_map, way))
		return (1);
	// ft_putnbr(snake->x_s);
	return (0);
}

int	go_down(t_game *snake, t_map *g_map)
{
	int way = 3;
	g_map->map[snake->y_s][snake->x_s] = ' ';
	snake->y_s += 1;
	if (collisions_case(snake, g_map, way))
		return (1);
	// ft_putnbr(snake->y_s);
	return (0);
}

int	go_right(t_game *snake, t_map *g_map)
{
	int way = 4;
	g_map->map[snake->y_s][snake->x_s] = ' ';
	snake->x_s += 1;
	if (collisions_case(snake, g_map, way))
		return (1);
	// ft_putnbr(snake->y_s);
	return (0);
}