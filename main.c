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


int		main(int argc, char **argv)
{
	int key;
	char **map;
	t_game *snake;

	if (argc < 3)
		return (-1);
	snake = malloc(sizeof(t_game));
	snake->x_map = ft_atoi(argv[2]);
//	ft_putnbr(snake->x_map);
	snake->y_map = ft_atoi(argv[1]);
	snake->x_s = rand_a_b(1, snake->x_map - 1);
	snake->y_s = rand_a_b(1, snake->y_map - 1);
//	ft_putnbr(snake->x_s);
//	ft_putnbr(snake->y_map);
	map = map_create(snake->x_map, snake->y_map);
	map[snake->x_s][snake->y_s] = 's';
	aff_map(map, snake);
	while (1)
	{
		key = getarrowkey();
		ft_putstr("\nKEY = ");
		if (key == 1)
		{
				map[snake->x_s][snake->y_s] = ' ';
				snake->x_s -= 1;
				map[snake->x_s][snake->y_s] = 's';
				ft_putnbr(snake->x_s);
		}
		else if (key == 2)
		{
				map[snake->x_s][snake->y_s] = ' ';
				snake->y_s -= 1;
				map[snake->x_s][snake->y_s] = 's';
				ft_putnbr(snake->x_s);
		}
		else if (key == 3)
			{
				map[snake->x_s][snake->y_s] = ' ';
				snake->y_s += 1;
				map[snake->x_s][snake->y_s] = 's';
				ft_putnbr(snake->y_s);
		}
		else if (key == 4)
			{
				map[snake->x_s][snake->y_s] = ' ';
				snake->x_s += 1;
				map[snake->x_s][snake->y_s] = 's';
				ft_putnbr(snake->y_s);
		}
		usleep(100000);
		system("CLEAR");
	}
	return (0);
}
