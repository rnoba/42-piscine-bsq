/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovasconc <otaviocavasc2@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:25:13 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 22:36:02 by rnogueir         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "validators.h"
#include "map.h"

int main(int argc, char **argv)
{
	char *buffer;
	char **map;
	int fd;
	
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if(argc > 1)
	{
		fd = ft_readfile(argv[1]);
		ft_read(fd, buffer);
	} else {
		ft_read(0, buffer);
	}
	map = ft_split(buffer, '\n');
	if(ft_is_valid_map(map))
		ft_show_solution(ft_read_map(map));
}
