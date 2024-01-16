#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int arg)
{
	char	c;

	c = (char)arg;
	if (!(c >= 48 && c <= 57))
	{
		return (0);
	}
	return (1);
}
/*
int main()
{
	printf("ft - %d\n", ft_isdigit('6'));
	printf("lib - %d\n", isdigit('6'));
}*/
