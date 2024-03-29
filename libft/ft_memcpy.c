#include "libft.h"

void	*ft_memcpy(void	*dest, void const	*src, size_t	n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *) dest;
	s2 = (unsigned char *) src;
	if (dest || src)
	{
		while (n--)
		{
			*s1++ = *s2++;
		}
	}
	return (dest);
}
