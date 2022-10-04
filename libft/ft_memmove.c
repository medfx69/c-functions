#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *) dst;
	s2 = (unsigned char *) src;
	if (s1 == s2)
		return (NULL);
	if (dst > src)
	{
		while (len-- > 0)
		{
			((char *)dst)[len] = ((char *)src)[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return ((void *)s1);
}

