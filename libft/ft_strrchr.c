/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 12:37:37 by zmakhube          #+#    #+#             */
/*   Updated: 2016/05/15 18:20:14 by zmakhube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int len;

	len = ft_strlen(str);
	while (str[len] != (char)c && len > 0)
	{
		len--;
	}
	if (str[len] == (char)c)
	{
		return ((char *)&str[len]);
	}
	return (NULL);
}
