/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 07:57:00 by zmakhube          #+#    #+#             */
/*   Updated: 2016/05/17 08:21:44 by zmakhube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *des, char *src)
{
	int		i;
	int		j;
	int		len;
	char	*newstr;

	i = 0;
	j = 0;
	len = ft_strlen(des) + ft_strlen(src);
	newstr = (char*)malloc((len + 1) * sizeof(*newstr));
	while (des[i] != '\0')
	{
		newstr[i] = des[i];
		i++;
	}
	while (src[j] != '\0')
	{
		newstr[i] = src[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (*(&newstr));
}
