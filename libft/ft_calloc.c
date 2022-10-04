#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	total;
	int		i;

	total = count * size;
	ptr = malloc (total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (total--)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
