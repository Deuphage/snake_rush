/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_hp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/13 15:30:38 by kescalie          #+#    #+#             */
/*   Updated: 2014/12/13 15:31:00 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "snake.h"
#include "libft/libft.h"

void	aff_pv(t_game *snake)
{
	int	i = 0;

	ft_putstr("PV:  ");
	while (i < snake->pv_s)
	{
		ft_putchar('|');
		i++;
	}
	ft_putchar('\n');
}