/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 17:33:04 by zmakhube          #+#    #+#             */
/*   Updated: 2016/05/17 08:57:26 by zmakhube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *)malloc((len + 1) * sizeof(char));
	if (newstr == NULL || s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (*s1)
	{
		newstr[i] = *s1++;
		i++;
	}
	while (*s2)
	{
		newstr[i++] = *s2++;
	}
	newstr[i] = '\0';
	return (newstr);
}
