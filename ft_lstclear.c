/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:50:01 by arturhar          #+#    #+#             */
/*   Updated: 2024/01/25 16:54:02 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*val;

	if (*lst)
	{
		while (*lst != NULL)
		{
			val = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = val;
		}
		*lst = NULL;
	}
}
