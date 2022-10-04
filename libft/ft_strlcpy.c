#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	i;
	char	*s;

	s = (char *) src;
	len_src = ft_strlen(s);
	i = 0;
	if (dstsize > 0)
	{
		while (s[i] && i + 1 < dstsize)
		{
			dst[i] = s[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len_src);
}
