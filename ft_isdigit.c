#include "libft.h"

int	ft_isdigit(int a)
{
	char	c;

	c = (char)a;
	if (!(c >= 48 && c <= 57))
	{
		return (0);
	}
	return (1);
}
