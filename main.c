/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovasconc <otaviocavasc2@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:25:13 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/06 21:06:22 by ovasconc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "validators.h"
#include "map.h"

void	ft_destroy(char **map)
{
	int	idx;

	idx = 1;
	while (map[idx] != 0)
	{
		free(map[idx]);
		idx++;
	}
	free(map[idx]);
	free(map);
}

static void	ft_help_solve_argv(int fd, char *buffer)
{
	int		linelen;
	char	**map;

	ft_read(fd, buffer);
	linelen = ft_strlendel(buffer, '\n');
	map = ft_split(buffer, '\n', linelen);
	if (ft_is_valid_map(map))
	{
		ft_show_solution(ft_read_map(map));
	}
	ft_destroy(map);
}

int	ft_solve_argv(int argc, char **argv)
{
	char	*buffer;
	int		fd;
	int		i;

	i = 1;
	while (i < argc)
	{
		buffer = malloc(sizeof(char) * BUFFER_SIZE);
		fd = ft_readfile(argv[i]);
		if (fd >= 0)
			ft_help_solve_argv(fd, buffer);
		if (i != argc -1)
			ft_putstr("\n");
		free(buffer);
		i++;
	}
	return (0);
}

int	ft_solve_stdin(void)
{
	char	*buffer;
	char	**map;
	int		linelen;

	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	ft_read_stdin(0, buffer);
	linelen = ft_strlendel(buffer, '\n');
	map = ft_split(buffer, '\n', linelen);
	if (ft_is_valid_map(map))
		ft_show_solution(ft_read_map(map));
	free(buffer);
	ft_destroy(map);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc <= 1)
		ft_solve_stdin();
	else
		ft_solve_argv(argc, argv);
}
