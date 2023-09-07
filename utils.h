/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovasconc <otaviocavasc2@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:27:29 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/06 20:42:19 by rnogueir         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include	<unistd.h>
# include	<malloc.h>
# include	<stdlib.h>
# include "maputils.h"

# ifndef BUFFER_SIZE

#  define BUFFER_SIZE 4294967295

# endif

char	**ft_split(char *buff, char del, int linelen);

int		ft_countlines(char *buff);

int		ft_atoi(char *str);

void	ft_printmap(char **m);

int		ft_strlendel(char *str, char del);

#endif // UTILS_H
