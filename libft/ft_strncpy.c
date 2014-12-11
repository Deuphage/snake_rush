/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:01:06 by kescalie          #+#    #+#             */
/*   Updated: 2013/11/27 16:59:09 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, char *s2, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = ((size_t)ft_strlen(s2) < n) ? (size_t)ft_strlen(s2) : n;
	while (i < j)
	{
		s1[i] = s2[i];
		i++;
	}
	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
	return (s1);
}
