/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 11:39:28 by zmakhube          #+#    #+#             */
/*   Updated: 2016/05/15 18:19:11 by zmakhube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;
	size_t remsize;
	size_t i;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize > 0 && dstlen < dstsize)
	{
		remsize = dstsize - dstlen - 1;
		while (i < remsize)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
	}
	dst[dstlen + i] = '\0';
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	if ((dstsize > dstlen) && (remsize == 0))
		return (dstlen + srclen);
	if (remsize > 0)
		return (dstlen);
	return (dstlen);
}
