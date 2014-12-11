/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_spe.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 17:14:31 by kescalie          #+#    #+#             */
/*   Updated: 2014/10/01 18:07:57 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_spe(void *s, int *cp)
{
	size_t len;

	len = ft_strlen(s);
	*cp = *cp + len;
	write(1, s, len);
}
