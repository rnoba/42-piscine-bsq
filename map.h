/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnogueir <rnogueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:02:18 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 16:51:31 by rnogueir         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */
#ifndef MAP_H
# define MAP_H

#include <fcntl.h>
#include <unistd.h>
#include "utils.h"

typedef struct s_mapstate
{
	int		lines;
	char	empty;
	char	obstacle;
	char	full;
}	s_mapstate;

s_mapstate*	ft_checkmap(char **m);

int	ft_readfile(char *filepath);

void	ft_read(int fd, char *buff);

void	ft_solve(char **map);

#endif // MAP_H 
