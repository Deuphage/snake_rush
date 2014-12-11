/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/15 19:29:56 by kescalie          #+#    #+#             */
/*   Updated: 2013/12/26 12:58:24 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
#define BUFF_SIZE 4096

static int	ft_end(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			str[i] = '\0';
			return (1);
		}
		i++;
	}
	return (0);
}

int			get_next_line(int fd, char **line)
{
	char		*buf;
	int			ret;
	static char	*mem = "";

	ret = BUFF_SIZE;
	while ((ret != 0) && (ft_end(mem) == 0))
	{
		buf = (char *)ft_memalloc(sizeof(char) * (BUFF_SIZE + 1));
		if ((ret = read(fd, buf, BUFF_SIZE)) == -1)
			return (-1);
		buf[ret] = '\0';
		mem = ft_strjoin(mem, buf);
		free(buf);
	}
	*line = ft_strdup(mem);
	mem = mem + (ft_strlen(*line) + 1);
	if (ret == 0 && (*line)[0] == '\0')
		return (0);
	return (1);
}
