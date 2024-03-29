#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t	n)
{
	size_t			i;
	unsigned char	*se1;
	unsigned char	*se2;

	se1 = (unsigned char *)s1;
	se2 = (unsigned char *)s2;
	i = 0;
	while ((se1[i] != '\0' || se2[i] != '\0') && i < n)
	{
		if (se1[i] != se2[i])
			return (se1[i] - se2[i]);
		i++;
	}
	return (0);
}
