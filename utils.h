/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnogueir <rnogueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:17:18 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 12:22:28 by rnogueir         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

#include	<unistd.h>
#include	<stdlib.h>

void	ft_showerror();

void	ft_putcharfd(char c, int fd);

void	ft_putstrfd(char *str, int fd);

void	ft_putstr(char *str);

char	**ft_split(char *buff, char del);

int		ft_countlines(char *buff);

#endif // FT_UTILS_H 
