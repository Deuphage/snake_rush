/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/11 10:22:06 by kescalie          #+#    #+#             */
/*   Updated: 2014/12/11 11:27:14 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include "snake.h"
#include <time.h> 

int		main(int argc, char **argv)
{
	int key;
	t_map *g_map;
	t_game *snake;

	srand(time(NULL));
	if (argc < 3)
		return (-1);
	snake = malloc(sizeof(t_game));
	g_map = malloc(sizeof(t_map));

	g_map->x_max = ft_atoi(argv[2]);
	g_map->y_max = ft_atoi(argv[1]);
	if (g_map->x_max < 3 || g_map->y_max < 3)
		return (-1);
	g_map->x_map = rand_a_b(3, g_map->x_max + 1);
	g_map->y_map = rand_a_b(3, g_map->y_max + 1);
	// ft_putnbr(g_map->x_map);
	// ft_putchar('\n');
	// ft_putnbr(g_map->y_map);
	// ft_putchar('\n');
	snake->x_s = 1;
	snake->y_s = 1;
	// ft_putnbr(snake->x_s);
	// ft_putchar('\n');
	// ft_putnbr(snake->y_s);
	// ft_putchar('\n');
	snake->pv_s = 13;

	g_map->map = map_create(g_map->x_map, g_map->y_map);
	ft_putendl("placement du heros");
	g_map->map[snake->x_s][snake->y_s] = 's';
	ft_putendl("affichage");
	
	//free_all(snake, g_map);
	while (1)
	{
		key = 2;
		key = getarrowkey();
		aff_map(g_map);
		aff_pv(snake);
		ft_putstr("POSITION:");
		ft_putnbr(snake->x_s);
		ft_putchar(' ');
		ft_putnbr(snake->y_s);
		ft_putchar('\n');
		ft_putstr("MAP");
		ft_putnbr(g_map->x_map);
		ft_putchar(' ');
		ft_putnbr(g_map->x_map);
		if (key == 1)
		{
			if (go_left(snake, g_map))
			{
				add_room(g_map);
				g_map = g_map->next;
			}
		}
		else if (key == 2)
		{
			if (go_up(snake, g_map))
			{
				add_room(g_map);
				g_map = g_map->next;
			}
		}
		else if (key == 3)
		{
			if (go_down(snake, g_map))
			{
				add_room(g_map);
				g_map = g_map->next;
			}
		}	
		else if (key == 4)
		{
			if (go_right(snake, g_map))
			{
				add_room(g_map);
				g_map = g_map->next;
			}
		}
		else if (key == 5)
		{
			free_all(snake, g_map);
			return (0);
		}
		usleep(100000);
		system("CLEAR");
	}
	return (0);
}
