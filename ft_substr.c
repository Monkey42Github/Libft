/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:15:50 by pschemit          #+#    #+#             */
/*   Updated: 2021/10/27 17:43:16 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	strlen;
	char	*str;

	j = 0;
	strlen = 0;
	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	while (s[start + strlen] && strlen < len)
		strlen++;
	str = malloc(sizeof(char) * (strlen + 1));
	if (!s || !str)
		return (NULL);
	while (j < strlen)
	{
		str[j++] = s[start++];
	}
	str[j] = '\0';
	return (str);
}
