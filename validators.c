/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovasconc <otaviocavasc2@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:13:30 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 16:43:02 by ovasconc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "validators.h"

static int	check_map_size(char **map)
{
	int	columns;
	int	lines;

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
	return (1);
}

static	int	check_instruction_line(char **map)
{
	char	*str;
	int		strlen;

	str = map[0];
	strlen = ft_strlen(str);
	if (str[0] < '0' || str[0] > '9')
		return (0);
	if (strlen < 3)
		return (0);
	if (str[strlen] == str[strlen - 1] || str[strlen] == str[strlen - 2]
		|| str[strlen - 1] == str[strlen - 2])
		return (0);
}

void	is_valid_map(char **map)
{
	if (check_map_size(map))
		printf("correct");
	else
		printf("error");
}


	// int line;
	// int column;

	// line = 0;
	// while (line < )
	// column = 0;
