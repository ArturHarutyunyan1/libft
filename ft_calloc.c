#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;
	i = 0;
	if (count != 0 && (count * size) / count != size)
		return (NULL);
	ptr = (void *)malloc(size * count);
	if (!ptr)
		return (NULL);
	if (size == 0)
		return (ptr);
	i = 0;
	while (i < (count * size))
	{
		ft_memset(ptr, 0, count * size);
		i++;
	}
	return (ptr);
}