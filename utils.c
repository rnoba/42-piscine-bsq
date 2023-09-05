/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovasconc <otaviocavasc2@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:28:18 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 17:24:31 by ovasconc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_putcharfd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstrfd(char *str, int fd)
{
	while (*str)
	{
		ft_putcharfd(*str, fd);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	ft_putstrfd(str, 1);
}

void	ft_showerror(char *str)
{
	ft_putstrfd(str, 2);
	exit (1);
}

int	ft_countlines(char *buff)
{
	int	lines;

	lines = 0;
	while (*buff)
	{
		if (*buff == '\n')
			lines++;
		buff++;
	}
	return (lines);
}

static	int ft_countdel(char *str, char del)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == del)
			count++;
		str++;
	}
	return (count);
}

static	int ft_strlendel(char *str, char del)
{
	int	idx;

	idx = 0;
	while(str[idx] != '\0' && str[idx] != del)
		idx++;
	return (idx);
}

//Remember to free the memory after using this
char **ft_split(char *str, char del)
{
	int idx;
	int l;
	int s;
	int len;
	char **split;

	l = 0;
	s = 0;
	idx = 0;
	len = ft_countdel(str, del) + 1;
	split = malloc(sizeof(char *) * len);
	while(idx < len && str[l] != '\0')
	{
		s = 0;
		split[idx] = malloc(sizeof(char) * ft_strlendel((&str[l]), del));
		while(str[l] != '\0' && str[l] != del)
		{
			split[idx][s] = str[l];
			s++;
			l++;
		}
		if(str[l] == del)
			l++;
		idx++;
	}
	split[idx] = 0;
	return (split);
}

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
	while (str[idx] != '\0')
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

int	ft_str_is_printable(char *str)
{
	int	i;
	int	printable;

	i = 0;
	printable = 1;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			printable = 0;
		}
		i++;
	}
	return (printable);
}
