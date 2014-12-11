/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:59:07 by kescalie          #+#    #+#             */
/*   Updated: 2014/10/10 15:03:57 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned char	*loc;
	size_t			i;

	i = 0;
	loc = (unsigned char *)s;
	while (i < n)
	{
		if (*loc == (unsigned char)c)
			return (loc);
		loc++;
		i++;
	}
	return (NULL);
}
