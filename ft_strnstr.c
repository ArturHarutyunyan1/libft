#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t  i;
	size_t  j;
	size_t  len;
	char    *hay;

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
