/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/18 12:39:38 by zmakhube          #+#    #+#             */
/*   Updated: 2016/05/21 14:04:32 by zmakhube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

int		main(int ac, char **av)
{
	char	*line;
	int		fd;

	(void)ac;
	line = (char*)malloc(sizeof(char));
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Failed to open file\n");
		return (0);
	}

	get_next_line(fd, &line);
	return (0);
}
