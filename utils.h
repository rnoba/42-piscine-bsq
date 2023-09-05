/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovasconc <otaviocavasc2@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:27:29 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 16:56:30 by ovasconc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

#include	<unistd.h>
#include	<malloc.h>
#include	<stdlib.h>

#ifndef BUFFER_SIZE

#define BUFFER_SIZE 4294967296

#endif

void	ft_showerror();

void	ft_putcharfd(char c, int fd);

void	ft_putstrfd(char *str, int fd);

void	ft_putstr(char *str);

char	**ft_split(char *buff, char del);

int		ft_countlines(char *buff);

int		ft_strlen(char *str);

int		ft_atoi(char *str);

int		ft_str_is_printable(char *str);

#endif // UTILS_H
