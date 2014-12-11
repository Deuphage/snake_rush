/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 14:50:06 by kescalie          #+#    #+#             */
/*   Updated: 2013/12/02 18:11:28 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*s2;

	s2 = ft_strnew(len);
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(s2 + i) = *(s + start + i);
		i++;
	}
	*(s2 + i) = '\0';
	return (s2);
}
