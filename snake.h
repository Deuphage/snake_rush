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
	int x_map;
	int y_map;
	int x_s;
	int y_s;
} t_game;
	int	getarrowkey(void);
char **map_create(int x, int y);
void	aff_map(char **map, t_game *snake);
int rand_a_b(int a, int b);
int go_left(t_game *snake, char **map);
int go_up(t_game *snake, char **map);
int go_down(t_game *snake, char **map);
int go_right(t_game *snake, char **map);
#endif
