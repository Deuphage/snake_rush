/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:38:03 by kescalie          #+#    #+#             */
/*   Updated: 2013/11/27 18:48:50 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		n;

	n = ft_strlen(s);
	while (n >= 0)
	{
		if (s[n] == (char)c)
			return ((char *)(s + n));
		n--;
	}
	return (NULL);
}
