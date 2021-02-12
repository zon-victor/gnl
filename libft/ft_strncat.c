/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 09:24:18 by zmakhube          #+#    #+#             */
/*   Updated: 2016/05/17 09:00:47 by zmakhube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *des, char *src, int n)
{
	char	*newstr;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(des) + n;
	newstr = (char *)malloc((len + 1) * sizeof(*newstr));
	while (des[i] != '\0')
	{
		newstr[i] = des[i];
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		newstr[i] = src[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (*(&newstr));
}
