/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitequ.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psebasti <sebpalluel@free.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:07:34 by psebasti          #+#    #+#             */
/*   Updated: 2017/11/09 19:30:21 by psebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		ft_lines(char const *s, char* str)
{
	unsigned int		lines;
	unsigned int		i;
	int					flag;

	lines = 0;
	i = 0;
	flag = 0;
	while (s && s[i])
	{
		while (s[i] && ft_stroneof(s[i], str) == OK)
			i++;
		flag = 1;
		while (s[i] && ft_stroneof(s[i], str) != OK)
		{
			if (flag)
			{
				flag = 0;
				lines++;
			}
			i++;
		}
	}
	return (lines);
}

static unsigned int		ft_letters(char const *s, char *str, int i)
{
	unsigned int		letters;

	letters = 0;
	while (s[i] && ft_stroneof(s[i], str) != OK)
	{
		letters++;
		i++;
	}
	return (letters);
}

char					**ft_strsplitequ(char const *s, char *str)
{
	char				**tmp;
	unsigned int		i;
	unsigned int		lines;
	unsigned int		letters;

	i = 0;
	lines = 0;
	if (!(tmp = (char**)malloc((ft_lines(s, str) + 1) * sizeof(char *))))
		return (NULL);
	while (s && s[i])
	{
		while (s[i] && ft_stroneof(s[i], str) == OK)
			i++;
		if (s[i])
		{
			letters = 0;
			if (!(tmp[lines] = malloc(sizeof(char) * ft_letters(s, str, i) + 1)))
				return (NULL);
			while (s[i] && ft_stroneof(s[i], str) != OK)
				tmp[lines][letters++] = s[i++];
			tmp[lines++][letters] = '\0';
		}
	}
	tmp[lines] = NULL;
	return (tmp);
}
