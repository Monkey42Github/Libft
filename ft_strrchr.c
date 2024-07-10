/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:17:17 by pschemit          #+#    #+#             */
/*   Updated: 2021/11/01 17:34:50 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			str = (char *)(s + i);
		i++;
	}
	if (s[i] == (char)c)
		str = (char *)(s + i);
	return (str);
}
