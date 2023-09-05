/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnogueir <rnogueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:25:13 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 13:24:08 by rnogueir         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "utils.h"
#include "validators.h"

int main(int argc, char **argv)
{
	int fd;
	char *buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if(argc > 1)
	{
		fd = ft_readfile(argv[1]);
		ft_read(fd, buffer);
	}
	printf("%s", buffer);
	return (0);
}