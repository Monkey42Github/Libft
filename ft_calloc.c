/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:04:20 by pschemit          #+#    #+#             */
/*   Updated: 2021/11/17 17:34:10 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*test;

	test = (void *)malloc(count * size);
	if (!test)
		return (NULL);
	ft_bzero(test, count * size);
	return (test);
}
