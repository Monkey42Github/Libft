/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:23:59 by pschemit          #+#    #+#             */
/*   Updated: 2021/11/04 18:51:02 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*test;
	t_list	*test2;

	test2 = NULL;
	while (lst)
	{
		test = ft_lstnew((*f)(lst->content));
		if (!test)
		{
			ft_lstclear(&test2, del);
			return (NULL);
		}
		ft_lstadd_back(&test2, test);
		lst = lst->next;
	}
	return (test2);
}
