/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnogueir <rnogueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:25:13 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 13:33:53 by rnogueir         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "utils.h"
#include "validators.h"

int main()
{
	//int fd;
	char *test = "a\nb\nc";
//	char *buffer = malloc(sizeof(char) * BUFFER_SIZE);
//
//	if(argc > 1)
//	{
//		fd = ft_readfile(argv[1]);
//		ft_read(fd, buffer);
//	}
//	printf("%s", buffer);
	is_valid_map(ft_split(test, '\n'));
	return (0);
}
