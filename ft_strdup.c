#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int	i;

	i = 0;
	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
