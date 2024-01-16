#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t	num)
{
	char 		*str;
	size_t		i;
	unsigned char	val;

	i = 0;
	str = (char *)ptr;
	val = (unsigned char)value;
	while (i < num)
		str[i++] = val;
	return (str);
}
