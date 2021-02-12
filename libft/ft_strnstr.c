/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 13:01:48 by zmakhube          #+#    #+#             */
/*   Updated: 2016/05/17 08:59:16 by zmakhube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*store;

	store = (char *)malloc(ft_strlen(needle) * sizeof(*store));
	store = (char *)needle;
	if (!needle)
	{
		return (char *)haystack;
	}
	else if (ft_strncmp((char *)needle, (char *)haystack, len) == 0
			&& ft_strlen(haystack) >= len)
	{
		store[len] = '\0';
		return (store);
	}
	else
	{
		if (ft_strlen(haystack + 1) >= len)
			return (ft_strnstr(haystack + 1, needle, len));
		return (NULL);
	}
}
