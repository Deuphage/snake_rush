/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:21:41 by kescalie          #+#    #+#             */
/*   Updated: 2013/11/27 17:24:29 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, char *s2)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(s2);
	while (s1[j] != '\0')
		j++;
	while (i < len)
	{
		s1[i + j] = s2[i];
		i++;
	}
	s1[i + j] = '\0';
	return (s1);
}
