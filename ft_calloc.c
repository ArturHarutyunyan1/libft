/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:31:50 by arturhar          #+#    #+#             */
/*   Updated: 2024/01/22 11:56:11 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#define UNIT_MAX_SQRT 65535

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if ((count > UNIT_MAX_SQRT || size > UNIT_MAX_SQRT)
		&& (count > 0 && UNIT_MAX_SQRT / count < size))
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, count * size);
	return (ptr);
}
