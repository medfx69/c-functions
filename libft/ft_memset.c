#include "libft.h"

void	*ft_memset(void *dest, int src, size_t n)
{
	unsigned char	*str;
	unsigned char	c;

	str = (unsigned char *) dest;
	c = (unsigned char)src;
	while (n > 0)
	{
		*str++ = c;
		n--;
	}
	return (dest);
}
