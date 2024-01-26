/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:17:04 by arturhar          #+#    #+#             */
/*   Updated: 2024/01/26 17:18:26 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;
	t_list	*val;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst != NULL)
	{
		val = f(lst->content);
		node = ft_lstnew(val);
		if (!node)
		{
			del(val);
			ft_lstclear(&result, (*del));
			return (result);
		}
		ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}
