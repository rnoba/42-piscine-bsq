/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovasconc <otaviocavasc2@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:27:55 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 21:07:56 by rnogueir         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATORS_H
# define VALIDATORS_H

#include "utils.h"
#include "map.h"

int	ft_is_valid_map(char **map);

s_mapstate*	ft_read_map(char **map);

#endif // FT_VALIDATORS_H
