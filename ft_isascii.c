#include "libft.h"

int	ft_isascii(int a)
{
	char	c;

	c = (char)a;
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
