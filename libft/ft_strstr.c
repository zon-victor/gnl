/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 12:45:15 by zmakhube          #+#    #+#             */
/*   Updated: 2016/05/17 08:58:29 by zmakhube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t len;

	len = ft_strlen(needle);
	if (ft_strncmp((char *)needle, (char *)haystack, len) == 0
			&& ft_strlen(haystack) >= len)
	{
		return (char *)(needle);
	}
	else
	{
		if (ft_strlen(haystack + 1) >= len)
		{
			return (ft_strstr(haystack + 1, needle));
		}
		else
		{
			return (NULL);
		}
	}
}
