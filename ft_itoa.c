/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:31:24 by pschemit          #+#    #+#             */
/*   Updated: 2021/11/17 17:35:12 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnb_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_aide(int n, char *strnb, int str_len)
{
	if (n < 0)
	{
		strnb[0] = '-';
		n *= -1;
	}
	strnb[str_len--] = '\0';
	while (n > 0)
	{
		strnb[str_len] = 48 + (n % 10);
		n /= 10;
		str_len--;
	}
	return (strnb);
}

char	*ft_itoa(int n)
{
	char	*strnb;
	int		str_len;

	if (n == 0 || n == -0)
		return (ft_strdup("0"));
	if (!n)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str_len = ft_strnb_len(n);
	strnb = (char *)malloc(str_len + 1);
	if (!strnb)
		return (NULL);
	return (ft_aide(n, strnb, str_len));
}
