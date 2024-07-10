/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:11:10 by pschemit          #+#    #+#             */
/*   Updated: 2021/10/27 14:25:26 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*source;
	char	*destination;

	i = -1;
	source = (char *) src;
	destination = (char *) dest;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (++i < n)
		{
			destination[n - 1 - i] = source[n - 1 - i];
		}
	}
	else
	{
		while (++i < n)
		{
			destination[i] = source[i];
		}
	}
	return (destination);
}
