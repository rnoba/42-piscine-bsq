/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovasconc <otaviocavasc2@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:25:13 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 14:28:56 by ovasconc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "utils.h"
#include "validators.h"

int main()
{
	//int fd;
	char *test = "";
//	char *buffer = malloc(sizeof(char) * BUFFER_SIZE);
//
//	if(argc > 1)
//	{
//		fd = ft_readfile(argv[1]);
//		ft_read(fd, buffer);
//	}
//	printf("%s", buffer);
	char **map = ft_split(test, '\n');
	is_valid_map(map);
	return (0);
}
