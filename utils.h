/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnogueir <rnogueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:27:29 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 13:33:07 by rnogueir         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */
#ifndef UTILS_H
# define UTILS_H

#include	<unistd.h>
#include	<malloc.h>
#include	<stdlib.h>

#ifndef BUFFER_SIZE

#define BUFFER_SIZE 1024;

#endif

void	ft_showerror();

void	ft_putcharfd(char c, int fd);

void	ft_putstrfd(char *str, int fd);

void	ft_putstr(char *str);

char	**ft_split(char *buff, char del);

int		ft_countlines(char *buff);

int		ft_strlen(char *str);

#endif // UTILS_H 
