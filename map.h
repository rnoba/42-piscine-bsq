/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnogueir <rnogueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:16:07 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/06 19:31:27 by rnogueir         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include <unistd.h>
# include "utils.h"
# include "stringlib.h"
# include "maputils.h"

typedef struct s_mapstate
{
	int		lines;
	int		cols;
	char	empty;
	char	obstacle;
	char	full;
	char	**map;
}	t_mapstate;

typedef struct s_square
{
	int		i;
	int		j;
	char	highest;
}	t_square;

void	ft_show_solution(t_mapstate *state);

#endif // MAP_H
