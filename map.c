/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovasconc <otaviocavasc2@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:32:10 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/06 20:23:15 by rnogueir         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

static	int	ft_canexpand(t_mapstate *s, int size, int i, int j)
{
	int	x;

	x = 0;
	if (s->map[i][j] == s->obstacle)
		return (0);
	if (i + size - 1 > s->lines - 1 || j + size - 1 > s->cols - 1)
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

void	ft_drawsquare(t_mapstate *s, int i, int j, int size)
{
	int	col;
	int	row;

	col = j;
	row = i;
	while (i < (row + size))
	{
		j = col;
		while (j < (col + size))
		{
			s->map[i][j] = s->full;
			j++;
		}
		i++;
	}
}

static void	ft_square(t_square *square, int i, int j, int h)
{
	square->i = i;
	square->j = j;
	square->highest = h;
}

static void	ft_solve(t_mapstate *s)
{
	int			size;
	t_square	square;
	int			i;
	int			j;

	size = 1;
	ft_square(&square, 0, 0, 1);
	i = 0;
	j = 0;
	while (i < s->lines)
	{
		j = 0;
		while (j < s->cols)
		{
			while (ft_canexpand(s, size, i, j))
				size++;
			if (size > square.highest)
				ft_square(&square, i, j, size);
			size = 1;
			j++;
		}
		i++;
	}
	ft_drawsquare(s, square.i, square.j, square.highest - 1);
}

void	ft_show_solution(t_mapstate *state)
{
	ft_solve(state);
	ft_printmap(state->map);
	free(state);
}
