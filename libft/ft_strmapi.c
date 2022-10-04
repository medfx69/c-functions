#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		j;
	char	*str;
	char	*s1;

	s1 = (char *)s;
	if (!s1)
		return (NULL);
	i = ft_strlen(s1);
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		str[j] = f(i, s[i]);
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
