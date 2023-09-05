/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovasconc <otaviocavasc2@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:13:30 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 13:23:12 by ovasconc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	is_valid_map(char **map)
{
	int i = 0;
	while(i < ft_strlen(map[1]))
	{
		printf("%c", map[1][i]);
		i++;
	}
}


	// int line;
	// int column;

	// line = 0;
	// while (line < )
	// column = 0;
