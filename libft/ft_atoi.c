/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:00:21 by kescalie          #+#    #+#             */
/*   Updated: 2014/10/10 15:01:46 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *s)
{
	int		nb;
	int		neg;

	nb = 0;
	neg = 1;
	while ((*s > 8 && *s < 14) || *s == ' ')
		s++;
	if (*s == '+')
		s++;
	else if (*s == '-')
	{
		s++;
		neg = -1;
	}
	while (*s != '\0' && ft_isdigit((int)*s))
	{
		nb = (nb * 10) + (*s - 48);
		s++;
	}
	return (nb * neg);
}
