/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:22:43 by kescalie          #+#    #+#             */
/*   Updated: 2013/12/02 18:09:13 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;
	char		*loc;

	i = 0;
	j = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && s2[j] != '\0' && i < n)
	{
		if (s2[j] == s1[i])
		{
			if (j == 0)
				loc = (char *)(s1 + i);
			j++;
		}
		else
			j = 0;
		i++;
	}
	if (s2[j] == '\0')
		return (loc);
	return (NULL);
}
