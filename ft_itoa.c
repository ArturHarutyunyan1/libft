#include "libft.h"

static size_t	get_digits(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		digits;
	long int	num;

	digits = get_digits(n);
	num = n;
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	str = (char *)malloc((digits + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[digits] = 0;
	while (digits--)
	{
		str[digits] = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
