/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/11 10:23:35 by kescalie          #+#    #+#             */
/*   Updated: 2014/12/11 18:11:05 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SNAKE_H
#define SNAKE_H

#include <stdlib.h>

typedef struct	s_game
{
	int 	pv_s;
	int 	att_s;
	int 	x_s;
	int 	y_s;
} t_game;

typedef struct s_map
{
	int		x_max;
	int		y_max;
	int		x_map;
	int		y_map;
	char	**map;
	struct s_map	*next;
	struct s_map	*previous;
} t_map;

int	getarrowkey(void);
char **map_create(int x, int y);
void aff_map(t_map *g_map);
void	aff_pv(t_game *snake);
int rand_a_b(int a, int b);
int go_left(t_game *snake, t_map *g_map);
int go_up(t_game *snake, t_map *g_map);
int go_down(t_game *snake, t_map *g_map);
int go_right(t_game *snake, t_map *g_map);
void	free_all(t_game *snake, t_map *g_map);
int		collisions_case(t_game *snake, t_map *g_map, int way);
t_map	*new_room(t_map *g_map);
void	add_room(t_map *g_map);
#endif
