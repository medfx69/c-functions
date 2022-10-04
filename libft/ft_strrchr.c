#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(str);
	while (str[i] != (char) c)
	{
		if (i == 0)
			return (0);
		i--;
	}
	return (str + i);
}
