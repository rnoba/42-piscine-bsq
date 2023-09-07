/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maputils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnogueir <rnogueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:21:04 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/06 19:30:55 by rnogueir         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "maputils.h"

static	int	ft_isspace(char c)
{
	if (c == ' '
		|| c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	idx;
	int	ns;
	int	r;

	idx = 0;
	ns = 1;
	r = 0;
	while (ft_isspace(*str))
		str++;
	while (str[idx + 3] != '\0')
	{
		if (ft_isspace(str[idx]))
			break ;
		if (str[idx] == '-')
			ns++;
		if (str[idx] >= '0' && str[idx] <= '9')
			r = (r * 10) + str[idx] - '0';
		idx += 1;
	}
	if (ns % 2 == 0)
		return (r * -1);
	return (r);
}

int	ft_readfile(char *filepath)
{
	int	fd;

	fd = open(filepath, O_RDONLY);
	if (fd == -1)
		ft_putstrfd("map error\n", 2);
	return (fd);
}

void	ft_read(int fd, char *buff)
{
	while (read(fd, buff, BUFFER_SIZE) > 0)
	{
	}
}

void	ft_read_stdin(int fd, char *buff)
{
	ssize_t	b_read;
	char	c;

	b_read = 0;
	while (read(fd, &c, 1) > 0)
	{
		buff[b_read] = c;
		b_read += 1;
	}
}
