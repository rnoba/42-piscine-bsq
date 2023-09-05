/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovasconc <otaviocavasc2@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:05:40 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 18:47:18 by ovasconc         ###   ########.fr       */
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

static	int ft_isobs(char **map, char obs, int i, int j)
{
	return (map[i][j] == obs);
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
	while (x < size)
	{
		if (map[i + size - 1][j + x] == obs)
			return (0);
		if (map[i + x][j + size - 1] == obs)
			return (0);
		x++;
	}
}

static	int	ft_trydraw(char **map, int size, int i, int j, s_mapstate *s)
{
	while(ft_canexpand(map, s->obstacle, size, i, j))
	{
		size++;
		i++;
		j++;
	}
}

static	void ft_solve_rec(char **map, s_mapstate *s)
{
	ft_trydraw(map, 4, 0, 0, s);
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
	ft_solve_rec(map, state);
	ft_printmap(map);
}
