/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbeudin <jbeudin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/30 15:39:34 by jbeudin           #+#    #+#             */
/*   Updated: 2014/12/11 11:10:53 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include "snake.h"

char	**map_create(int x, int y)
{
	int		i;
	int		j;
	char	**map;

	map = (char **)malloc(sizeof(char*) * y + 1);
	i = 0;
	j = 0;

	while (i < y)
	{
		j = 0;
		map[i] = (char *)malloc(sizeof(char) * x + 1);
		while (j < x)
		{
			
			if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1))
			{
				map[i][j] = '#';
				ft_putchar(map[i][j]);
			}
			else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0))
			{
				map[i][j] = '#';
				ft_putchar(map[i][j]);
			}
			else if ((i == 0 || i == y - 1) && (j > 0 && j < x - 1))
			{
				map[i][j] = '#';
				ft_putchar(map[i][j]);
			}
			else if ((i > 0 && i < y - 1) && (j == 0 || j == x - 1))
			{
				map[i][j] = '#';
				ft_putchar(map[i][j]);
			}
			else
			{
				map[i][j] = ' ';
				ft_putchar(map[i][j]);
			}
			j++;
		}
		j++;
		map[i][j] = ('\0');
		ft_putchar('\n');
		i++;
	}
	map[i] = '\0';
	return (map);
}
