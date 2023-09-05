/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnogueir <rnogueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:05:40 by rnogueir          #+#    #+#             */
/*   Updated: 2023/09/05 13:21:30 by rnogueir         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

int	ft_readfile(char *filepath)
{
	int fd;

	fd = open(filepath, O_RDONLY);
	if(fd == -1)
		ft_showerror();
	return (fd);
}

void	ft_read(int fd, char **buff)
{
	
	while(read(fd, buff, BUFFER_SIZE) > 0)
	{
	}
}
