/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_room.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/13 16:35:09 by kescalie          #+#    #+#             */
/*   Updated: 2014/12/13 16:35:11 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "snake.h"
#include "libft/libft.h"

t_map	*new_room(t_map *g_map)
{
	t_map *room;

	room = malloc(sizeof(t_map));
	if (room == NULL)
		return (NULL);
	room->x_max = g_map->x_max;
	room->y_max = g_map->y_max;
	ft_putnbr(room->x_max);
	ft_putchar('\n');
	ft_putnbr(room->y_max);
	ft_putchar('\n');
	room->x_map = rand_a_b(3, g_map->x_max + 1);
	room->y_map = rand_a_b(3, g_map->y_max + 1);
	room->map = map_create(room->x_max, room->y_max);
	room->next = NULL;
	return (room);
}

void	add_room(t_map *g_map)
{
	t_map *room;

	if ((room = new_room(g_map)) == NULL)
			return ;
	ft_putstr("add_room");
	ft_putnbr(room->x_max);
	ft_putchar('\n');
	ft_putnbr(room->y_max);
	ft_putchar('\n');
	room->previous = g_map;
	g_map->next = room;
}