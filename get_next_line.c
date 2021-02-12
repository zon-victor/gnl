/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/17 10:04:55 by zmakhube          #+#    #+#             */
/*   Updated: 2016/05/21 16:42:45 by zmakhube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include "get_next_line.h"

size_t	ft_linelen(char *s)
{
	size_t line_len;

	line_len = 0;
	while (*s != '\n')
	{
		line_len++;
		s++;
	}
	return (line_len);
}

char	*ft_next_line(char *not_yet_read, char **l)
{
	size_t	i;
	size_t	line_len;

	i = 0;
	line_len = ft_linelen(not_yet_read);
	storeline = ft_strnew(line_len);
	ft_strncpy((char *)line, not_yet_read, line_len);
	return ((char *)line);
}

int		ft_not_yet_run(const int fd, char **line, char *buffer, t_read *data)
{
	int response;

	response = read(fd, buffer, BUFF_SIZE);
	if ((data->not_yet_read == NULL && response == 0) || response == -1)
	{
		return (response);
	}
	if (ft_strcmp(data->not_yet_read, "") == 0)
	{
		//not_yet_read = ft_strnew(1);
		data->not_yet_read = ft_strjoin(data->not_yet_read, buffer);
		printf("%lu\n", ft_linelen(data->not_yet_read));
	}
	return (ft_get_next_line(fd, line, buffer, data));
}

int		ft_get_next_line(const int fd, char **line, char *buffer, t_read *data)
{
	if (data->not_yet_read == NULL)
	{
		data->not_yet_read = ft_strdup("");
		return (ft_not_yet_run(fd, line, buffer, data));
	}
	else
	{
		if (ft_strchr(data->not_yet_read, '\n') != NULL)
		{
			*line = ft_next_line(data->not_yet_read, line);
			data->not_yet_read = ft_strdup(ft_strchr(data->not_yet_read, '\n'));
			//printf("%lu\n", *line);
			return (1);
		}
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	char	*buffer;
	static t_read	*data;

	data = (t_read*)malloc(sizeof(t_read));
	buffer = (char *)malloc((BUFF_SIZE + 1) * sizeof(char));
	if (buffer && (fd < 0 || BUFF_SIZE < 0)) 
	{
		return (-1);
	}
	*line = ft_strdup("");
	return(ft_get_next_line(fd, line, buffer, data));
}
