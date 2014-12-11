/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:27:18 by kescalie          #+#    #+#             */
/*   Updated: 2013/12/11 13:53:23 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*mem;
	int		i;

	i = 0;
	mem = ft_strnew(ft_strlen(s));
	if (mem == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		mem[i] = f(s[i]);
		i++;
	}
	return (mem);
}
