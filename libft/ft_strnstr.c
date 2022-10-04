#include "libft.h"

char	*ft_strnstr(const char	*str, const char	*to_find, size_t len)
{
	size_t		i;
	size_t		j;
	char		*s1;
	char		*s2;

	s1 = (char *)str;
	s2 = (char *)to_find;
	i = 0;
	j = 0;
	if (ft_strlen(s2) == 0 || s1 == s2)
		return (s1);
	while (s1[i] && i < len)
	{
		j = 0;
		while (s1[i + j] && s2[j] && s2[j] == s1[i + j] && i + j < len)
			j++;
		if (j == ft_strlen(s2))
			return (s1 + i);
		i++;
	}
	return (0);
}
