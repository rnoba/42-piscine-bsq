/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnogueir <rnogueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:32:10 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 22:41:12 by rnogueir         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include <stdio.h>

int	ft_readfile(char *filepath)
{
	int fd;

	fd = open(filepath, O_RDONLY);
	if(fd == -1)
		ft_showerror();
	return (fd);
}

void	ft_read(int fd, char *buff)
{
	ssize_t b_read;

	b_read = 0;
	while(read(fd, buff, BUFFER_SIZE) > 0)
	{
		b_read += 1;
	}
}

void	ft_printmap(char **m)
{
	while(*m != 0)
	{ ft_putstr(*m); ft_putstr("\n");
		m++;
	}
}

static	int	ft_canexpand(s_mapstate *s, int size, int i, int j)
{
	int	x;

	x = 0;
	if (s->map[i][j] == s->obstacle)
		return (0);
	if(i + size - 1 > s->lines - 1 || j + size - 1 > s->cols - 1)
		return (0);
	while (x < size)
	{
		if (s->map[i + size - 1][j + x] == s->obstacle)
			return (0);
		if (s->map[i + x][j + size - 1] == s->obstacle)
			return (0);
		x++;
	}
	return (1);
}

void	ft_drawsquare(s_mapstate* s, int i, int j, int size)
{
	
	int col;
	int row;

	col = j;
	row = i;
	while(i < (row + size))
	{
		j = col;
		while(j < (col + size))
		{
			s->map[i][j] = s->full;
			j++;
		}
		i++;
	}
}

static	void ft_solve(s_mapstate *s)
{
	int size;
	int highest;
	int i;
	int j;
	int	h_i;
	int	h_j;

	size = 1;
	highest = 1;
	i = 0;
	j = 0;
	while(i < s->lines)
	{
		j = 0;
		while(j < s->cols)
	
		{
			while(ft_canexpand(s, size, i, j))
			{
				size++;
			}
			if(size > highest)
			{
				h_i = i;
				h_j = j;
				highest = size;
			}
			size = 1;
			j++;
		}
		i++;
	}
	ft_drawsquare(s, h_i, h_j, highest - 1);
}

void	ft_show_solution(s_mapstate *state)
{
	ft_solve(state);
	ft_printmap(state->map);
}
