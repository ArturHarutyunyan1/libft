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

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	len = ft_strlen(needle);
	if (len == 0)
		return (hay);
	while (hay[i] != '\0' && i < n)
	{
		j = 0;
		while (hay[i + j] != '\0' && i + j < n && needle[j] != '\0'
			&& hay[i + j] == needle[j])
			j++;
		if (j == len)
			return (hay + i);
		i++;
	}
	return (0);
}
