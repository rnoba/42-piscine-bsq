/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnogueir <rnogueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:32:10 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 20:07:02 by rnogueir         ###   ########.org.br   */
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
	{
		ft_putstr(*m);
		ft_putstr("\n");
		m++;
	}
}

static	int	ft_canexpand(char **map, char obs, int size, int i, int j)
{
	int	x;

	x = 0;
	if (map[i][j] == obs)
		return 0;
	if(i + size - 1 > 499 || j + size - 1 > 499)
		return (0);
	while (x < size)
	{
		if (map[i + size - 1][j + x] == obs)
			return (0);
		if (map[i + x][j + size - 1] == obs)
			return (0);
		x++;
	}
	return (1);
}

void	ft_drawsquare(char **map, int i, int j, int size)
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
			map[i][j] = '#';
			j++;
		}
		i++;
	}
}

static	void ft_solve_rec(char **map, s_mapstate *s)
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
			while(ft_canexpand(map, s->obstacle, size, i, j))
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
	ft_drawsquare(map, h_i, h_j, highest - 1);
}

void	ft_solve(char **map)
{
	int size = ft_atoi(map[0]);
	s_mapstate* state;
	int	c = 0;
	int sizec = size;
	state = malloc(sizeof(s_mapstate));
	while(sizec > 0)
	{
		c++;
		sizec /= 10;
	}
	state->empty = (map[0][c]);
	state->obstacle = (map[0][c + 1]);
	state->full = (map[0][c + 2]);
	state->lines = size;
	map++;
	state->cols = ft_strlen(map[0]);
	ft_solve_rec(map, state);
	ft_printmap(map);
}
