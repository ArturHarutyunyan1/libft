#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	char	*lastOccurance;

	i = 0;
	lastOccurance = NULL;

	while (str[i] != '\0')
	{
		if (str[i] == c)
			lastOccurance = (char *)&str[i];
		i++;
	}
	return (lastOccurance);
}
