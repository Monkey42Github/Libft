/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:04:11 by pschemit          #+#    #+#             */
/*   Updated: 2021/11/01 18:09:44 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	tailledest;
	size_t	taillesrc;

	tailledest = ft_strlen(dst);
	taillesrc = ft_strlen(src);
	i = tailledest;
	j = 0;
	if (!dst && !src)
		return (0);
	if (dstsize <= tailledest)
		return (dstsize + taillesrc);
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i++] = src[j];
		j++;
	}
	dst[i] = '\0';
	return (tailledest + taillesrc);
}
