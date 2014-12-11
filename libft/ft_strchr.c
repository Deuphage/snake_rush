/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:02:35 by kescalie          #+#    #+#             */
/*   Updated: 2013/12/02 18:07:26 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*loc;
	int		n;

	n = 0;
	loc = (char *)s;
	while (loc[n] != '\0')
	{
		if (loc[n] == (char)c)
			return (loc + n);
		n++;
	}
	if ((char)c == loc[n])
		return (loc + n);
	return (NULL);
}
