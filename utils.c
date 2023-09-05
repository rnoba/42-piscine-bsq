/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnogueir <rnogueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:21:53 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 13:08:51 by rnogueir         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */
#include "utils.h"

void	ft_putcharfd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstrfd(char *str, int fd)
{
	while(*str)
	{
		ft_putcharfd(*str, fd);
		str++;
	}
}

void	ft_putstr(char *str)
{
	ft_putstrfd(str, 1);
}

void	ft_showerror()
{
	ft_putstrfd("Error\n", 2);
	exit (1);
}

int	ft_countlines(char *buff)
{
	int lines;

	lines = 0;
	while(*buff)
	{
		if(*buff == '\n')
			lines++; 
		buff++;
	}
	return (lines);
}

static	int ft_countdel(char *str, char del)
{
	int count;
	
	count = 0;
	while(*str)
	{
		if(*str == del)
			count++;
		str++;
	}
	return (count);
}

static	int ft_strlendel(char *str, char del)
{
	int idx;

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
	return (split);
}
