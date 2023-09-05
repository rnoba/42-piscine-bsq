/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovasconc <otaviocavasc2@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:12:14 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 13:23:33 by ovasconc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATORS_H
# define VALIDATORS_H

typedef struct s_mapstate
{
	int		lines;
	char	empty;
	char	obstacle;
	char	full;
}	s_mapstate;

s_mapstate*	ft_checkmap(char *BUFFER);

void	is_valid_map(char **map);

#endif // FT_VALIDATORS_H
