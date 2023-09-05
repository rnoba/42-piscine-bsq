/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnogueir <rnogueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:12:14 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 12:19:30 by rnogueir         ###   ########.org.br   */
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

#endif // FT_VALIDATORS_H 
