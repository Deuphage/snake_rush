/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 12:33:06 by kescalie          #+#    #+#             */
/*   Updated: 2014/10/10 15:05:12 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		temp[n];
	size_t		i;

	i = 0;
	while (i < n)
	{
		temp[i] = ((char *)s2)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char *)s1)[i] = temp[i];
		i++;
	}
	return (s1);
}
