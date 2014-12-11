/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 10:44:11 by kescalie          #+#    #+#             */
/*   Updated: 2014/01/03 12:06:13 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
	char		*s;
	size_t		i;

	i = 0;
	s = (char *)malloc((size + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (i < size + 1)
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}
