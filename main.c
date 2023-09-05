/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovasconc <otaviocavasc2@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:25:13 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 16:46:22 by ovasconc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "utils.h"
#include "validators.h"
#include "map.h"

int main(int argc, char **argv)
{
	int fd;
	char *buffer;

	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if(argc > 1)
	{
		fd = ft_readfile(argv[1]);
		ft_read(fd, buffer);
		close(fd);
		ft_solve(ft_split(buffer, '\n'));
	} else
		ft_read(0, buffer);
//	printf("%s", buffer);
	return (0);
}
