/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 14:20:49 by kescalie          #+#    #+#             */
/*   Updated: 2013/11/27 17:26:44 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncat(char *s1, char *s2, size_t n)
{
	size_t		i;
	size_t		j;
	size_t		len;

	i = 0;
	j = 0;
	len = ft_strlen(s2);
	while (s1[j] != '\0')
		j++;
	while (i < n && i < len)
	{
		s1[i + j] = s2[i];
		i++;
	}
	s1[i + j] = '\0';
	return (s1);
}
