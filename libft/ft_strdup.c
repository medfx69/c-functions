#include "libft.h"

static char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(const char	*s1)
{
	int		i;
	char	*str;
	char	*ptr;

	str = (char *)s1;
	i = 0;
	while (str[i])
		i++;
	ptr = malloc(i + 1);
	if (!ptr)
		return (0);
	ft_strcpy(ptr, str);
	ptr [i] = 0;
	return (ptr);
}
