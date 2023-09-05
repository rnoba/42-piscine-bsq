/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovasconc <otaviocavasc2@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:17:18 by rnogueir          #+#    #+#             */
=======
/*   Updated: 2023/09/05 13:24:30 by ovasconc         ###   ########.fr       */
>>>>>>> 8cb0cf31e6e8e5ff8ab402c4e973732b46c5b1d1
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

#include	<unistd.h>
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

<<<<<<< HEAD
#endif // UTILS_H 
=======
int	ft_strlen(char *str);
