/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovasconc <otaviocavasc2@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:28:18 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/06 21:09:54 by ovasconc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <stdio.h>

void	ft_printmap(char **m)
{
	while (*m != 0)
	{
		ft_putstr(*m);
		ft_putstr("\n");
		m++;
	}
}

int	ft_countlines(char *buff)
{
	int	lines;

	lines = 0;
	while (*buff)
	{
		if (*buff == '\n')
			lines++;
		buff++;
	}
	return (lines);
}

static	int	ft_countdel(char *str, char del)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == del)
			count++;
		str++;
	}
	return (count);
}

int	ft_strlendel(char *str, char del)
{
	int	idx;

	while (*str != '\n')
		str++;
	str++;
	idx = 0;
	while (str[idx] != '\0' && str[idx] != del)
		idx++;
	return (idx);
}

char	**ft_split(char *str, char del, int linelen)
{
	int		idx;
	int		l;
	int		s;
	int		len;
	char	**split;

	l = 0;
	s = 0;
	idx = 0;
	len = ft_countdel(str, del) + 1;
	split = malloc(sizeof(char *) * len);
	while (idx < len && str[l] != '\0')
	{
		s = 0;
		split[idx] = malloc(sizeof(char) * linelen + 1);
		while (str[l] != '\0' && str[l] != del)
			split[idx][s++] = str[l++];
		split[idx][s] = '\0';
		l++;
		idx++;
	}
	split[idx] = 0;
	return (split);
}
