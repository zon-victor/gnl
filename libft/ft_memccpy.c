/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 10:13:47 by zmakhube          #+#    #+#             */
/*   Updated: 2016/05/17 09:20:51 by zmakhube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	char	*new_dst;

	i = 0;
	new_dst = (char *)dst;
	while (i < n)
	{
		new_dst[i] = ((char *)src)[i];
		if (((char *)src)[i] == (unsigned char)c)
		{
			return ((void *)&new_dst[i + 1]);
		}
		i++;
	}
	return (NULL);
}
