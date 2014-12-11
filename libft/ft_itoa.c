/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 18:18:52 by kescalie          #+#    #+#             */
/*   Updated: 2014/10/10 15:03:27 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_intlen(int j)
{
	int		c;

	c = 1;
	if (j < 0)
	{
		j = -j;
		c++;
	}
	while (j > 9)
	{
		c++;
		j = j / 10;
	}
	return (c);
}

static void		ft_intneg(int *n, int *i, char *str)
{
	*str = '-';
	*i = *i + 1;
	*n = -*n;
}

char			*ft_itoa(int n)
{
	int		temp;
	char	*str;
	int		i;

	i = 0;
	temp = 1000000000;
	if (n < -2147483647)
		return (ft_strdup("-2147483648"));
	str = ft_strnew(ft_intlen(n));
	if (str == NULL)
		return (str);
	if (n < 0)
		ft_intneg(&n, &i, str);
	while (n / temp == 0 && temp != 1)
		temp /= 10;
	while (temp != 0)
	{
		str[i] = (char)('0' + n / temp);
		i++;
		n = n % temp;
		temp = temp / 10;
	}
	return (str);
}
