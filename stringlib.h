/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovasconc <otaviocavasc2@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 23:38:54 by ovasconc          #+#    #+#             */
/*   Updated: 2023/09/06 17:51:39 by rnogueir         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGLIB_H
# define STRINGLIB_H

# include "utils.h"

void	ft_putcharfd(char c, int fd);

int		ft_str_is_printable(char *str);

void	ft_putstrfd(char *str, int fd);

int		ft_strlen(char *str);

void	ft_putstr(char *str);

#endif
