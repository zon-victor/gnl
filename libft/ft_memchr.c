/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 13:05:03 by zmakhube          #+#    #+#             */
/*   Updated: 2016/05/18 13:33:10 by zmakhube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (*(unsigned char *)s != '\0' && i < n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
		{
			return ((unsigned char *)s);
		}
		i++;
		s++;
	}
	return (NULL);
}
