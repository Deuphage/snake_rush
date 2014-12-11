/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:15:52 by kescalie          #+#    #+#             */
/*   Updated: 2014/10/10 15:05:25 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *v, int n, size_t len)
{
	size_t			i;
	unsigned char	*c;

	i = 0;
	c = (unsigned char *)v;
	while (i < len)
	{
		c[i] = (unsigned char)n;
		i++;
	}
	return (v);
}
