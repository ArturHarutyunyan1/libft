#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int argument)
{
	char	c;

	c = (char)argument;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
	printf("ft - %d\n", ft_isalpha('s'));
	printf("lib - %d\n", isalpha('s'));
}*/
