#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (n-- > 0 && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (i + ft_strlen(src));
}
