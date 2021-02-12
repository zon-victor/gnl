/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/17 09:54:56 by zmakhube          #+#    #+#             */
/*   Updated: 2016/05/21 16:16:12 by zmakhube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 4096
# include <fcntl.h>

typedef struct		s_read
{
	char	*not_yet_read;
	char	*line;
}					t_read;

size_t	ft_linelen(char *s);
char	*ft_next_line(char *not_yet_read);
int		ft_not_yet_run(const int fd, char **line, char *buffer, t_read *data);
int		ft_get_next_line(const int fd, char **line, char *buffer, t_read *data);
int		get_next_line(const int fd, char **line);

#endif
