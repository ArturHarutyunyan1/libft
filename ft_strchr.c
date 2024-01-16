#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	if (str[i] == c)
		return (char *)(str + i);
	return (NULL);
}
