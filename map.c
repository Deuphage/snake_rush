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
	int		door;
	int		random;
	char	**map;

	map = (char **)malloc(sizeof(char*) * y + 1);
	i = 0;
	door = 0;

	while (i < y)
	{
		j = 0;
		map[i] = (char *)malloc(sizeof(char) * x + 1);
		while (j < x)
		{
			if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1))
			{
				map[i][j] = '#'; //coin superieur gauche et inferieur droit			
			}
			else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0))
			{
				map[i][j] = '#'; //coin superieur droit et inferieur gauche			
			}
			else if ((i == 0 || i == y - 1) && (j > 0 && j < x - 1))
			{
				random = rand_a_b(0, 100);
				// ft_putnbr(random);
				// ft_putchar('\n');
				if (random > 90 && !door && i > 0 && i < x - 1)
				{
					map[i][j] = 'H';
					door = 1;
				}
				else
					map[i][j] = '#'; //mur haut et bas				
			}
			else if ((i > 0 && i < y - 1) && (j == 0 || j == x - 1))
			{
				random = rand_a_b(0, 100);
				if (random > 90 && !door && i > 0 && i < x - 1)
				{
					map[i][j] = 'H';
					door = 1;
				}
				else
					map[i][j] = '#'; // mur droite et gauche
			}
			else
			{
				map[i][j] = ' ';
			}
			j++;
		}
		j++;
		map[i][j] = ('\0');
		i++;
	}
	map[i] = '\0';
	if (!door)
	{
		ft_putendl("sortie");
		map[rand_a_b(1, y - 1)][rand_a_b(1, x - 1)] = 'A';
	}
	return (map);
}
