#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t	i;

	i = 0;
	str1 = (const char *)ptr1;
	str2 = (const char *)ptr2;
	while (i < n && str1[i] == str2[i])
		i++;
	if (str1[i] == str2[i])
		return (0);
	return (str1[i] - str2[i]);
}
