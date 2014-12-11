/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 15:45:52 by kescalie          #+#    #+#             */
/*   Updated: 2014/01/03 12:08:47 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		count_words(char const *s, char c)
{
	int		num;
	int		i;

	num = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			num++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (num);
}

static int		st_strlen(char const *s, int *i, char c)
{
	int		res;

	res = 0;
	while (s[*i + res] == c)
		*i = *i + 1;
	while (s[*i + res] && s[*i + res] != c)
		res++;
	return (res);
}

static void		copy_word(char const *s, int *i, char c, char *word)
{
	while (s[*i] && s[*i] != c)
	{
		*word = s[*i];
		*i = *i + 1;
		word++;
	}
	*word = '\0';
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		word;
	int		len_word;
	int		num_words;
	int		i;

	if (!s)
		return (NULL);
	num_words = count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!res)
		return (NULL);
	word = 0;
	i = 0;
	while (word < num_words)
	{
		len_word = st_strlen(s, &i, c);
		res[word] = (char *)malloc(sizeof(char) * (len_word + 1));
		if (!res[word])
			return (NULL);
		copy_word(s, &i, c, res[word]);
		word++;
	}
	res[num_words] = '\0';
	return (res);
}
