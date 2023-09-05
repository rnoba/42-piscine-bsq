/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnogueir <rnogueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:05:40 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 16:42:23 by rnogueir         ###   ########.org.br   */
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

void	ft_solve(char **map)
{
	printf("%d\n", ft_atoi(map[0]));
}
