/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovasconc <otaviocavasc2@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:13:30 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/06 20:14:30 by rnogueir         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "validators.h"

static int	check_map_size(char **map)
{
	int	columns;
	int	lines;
	int	linesize;

	linesize = ft_atoi(map[0]);
	if (!map[1])
		return (0);
	columns = ft_strlen(map[1]);
	lines = 1;
	while (map[lines])
	{
		if (columns != ft_strlen(map[lines]))
			return (0);
		lines++;
	}
	if (linesize == lines - 1)
		return (1);
	else
		return (0);
}

static	int	check_instruction_line(char **map)
{
	char	*str;
	int		strlen;
	int		i;

	i = 0;
	str = map[0];
	strlen = ft_strlen(str);
	if (str[0] < '0' || str[0] > '9')
		return (0);
	while (i < strlen - 3)
	{
		if (str[i] < '0' || str[i] > '9')
			break ;
		i++;
	}
	if (strlen != 3 + i)
		return (0);
	if (str[strlen - 1] == str[strlen - 2] || str[strlen - 1] == str[strlen - 3]
		|| str[strlen - 2] == str[strlen - 3])
		return (0);
	return (ft_str_is_printable(str));
}

static	int	check_map_chars(char **map)
{
	int		lines;
	int		columns;
	char	obstacle;
	char	empty;
	int		firstlinelen;

	firstlinelen = ft_strlen(map[0]);
	empty = map[0][firstlinelen - 3];
	obstacle = map[0][firstlinelen - 2];
	lines = 1;
	while (map[lines])
	{
		columns = 0;
		while (map[lines][columns])
		{
			if (map[lines][columns] != empty
				&& map[lines][columns] != obstacle)
				return (0);
			columns++;
		}
		if (!ft_str_is_printable(map[lines]))
			return (0);
		lines++;
	}
	return (1);
}

int	ft_is_valid_map(char **map)
{
	if (!(check_instruction_line(map)
			&& check_map_size(map) && check_map_chars(map)))
	{
		ft_putstrfd("map error\n", 2);
		return (0);
	}
	return (1);
}

t_mapstate	*ft_read_map(char **map)
{
	t_mapstate	*state;
	int			flinelen;

	state = malloc(sizeof(t_mapstate));
	flinelen = ft_strlen(map[0]);
	state->lines = ft_atoi(map[0]);
	state->cols = ft_strlen(map[1]);
	state->empty = map[0][flinelen - 3];
	state->obstacle = map[0][flinelen - 2];
	state->full = map[0][flinelen - 1];
	free(map[0]);
	state->map = &map[1];
	return (state);
}
