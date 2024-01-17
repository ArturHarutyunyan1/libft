/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 00:31:44 by arturhar          #+#    #+#             */
/*   Updated: 2024/01/17 00:31:50 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	neg;
	int	num;
	int	i;

	i = 0;
	neg = 1;
	num = 0;
	while ((str[i] == ' ' || (str[i] == '\n') || (str[i] == '\t')
			|| (str[i] == '\v') || (str[i] == '\f') || str[i] == '\r'))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}
