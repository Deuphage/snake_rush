/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:55:20 by kescalie          #+#    #+#             */
/*   Updated: 2013/11/30 14:19:04 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		len;

	while (*s != '\0' && (*s == ' ' || *s == '\n' || *s == '\t'))
		s++;
	len = ft_strlen(s);
	while (len > 0 && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t'))
		len--;
	return (ft_strsub(s, 0, len));
}
