/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 16:10:32 by kescalie          #+#    #+#             */
/*   Updated: 2014/12/12 16:10:36 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "snake.h"
#include "libft/libft.h"

void	free_all(t_game *snake, t_map *g_map)
{
	int y = 0;

	while (y < g_map->y_map)
	{
		free(g_map->map[y]);
		y++;
	}
	free(g_map->map);
	free(g_map);
	free(snake);
}