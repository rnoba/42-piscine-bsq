/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maputils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnogueir <rnogueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:23:09 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/06 19:32:19 by rnogueir         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAPUTILS_H
# define MAPUTILS_H

# include <fcntl.h>
# include "utils.h"
# include "stringlib.h"

int		ft_atoi(char *str);

int		ft_readfile(char *filepath);

void	ft_read(int fd, char *buff);

void	ft_read_stdin(int fd, char *buff);

#endif
