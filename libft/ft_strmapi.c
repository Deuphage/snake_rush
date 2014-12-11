/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:44:32 by kescalie          #+#    #+#             */
/*   Updated: 2013/11/30 14:13:39 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mem;
	unsigned int	i;

	mem = ft_strnew(ft_strlen(s) + 1);
	i = 0;
	if (mem == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		mem[i] = f(i, s[i]);
		i++;
	}
	return (mem);
}
