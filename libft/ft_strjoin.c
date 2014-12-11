/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:10:51 by kescalie          #+#    #+#             */
/*   Updated: 2014/01/03 11:52:56 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*s3;
	size_t		len;
	char		*loc;

	len = ft_strlen(s1) + ft_strlen(s2);
	s3 = ft_strnew(len);
	loc = s3;
	if (s3 == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		*s3 = *s1;
		s1++;
		s3++;
	}
	while (*s2 != '\0')
	{
		*s3 = *s2;
		s2++;
		s3++;
	}
	*s3 = '\0';
	return (loc);
}
