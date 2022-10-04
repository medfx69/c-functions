#include "libft.h"

static int	ft_get_start(const char *s1, const char *set)
{
	int		i;
	int		j;

	j = ft_strlen(s1);
	i = 0;
	while (i < j)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static int	ft_git_end(const char *s1, const char *set)
{
	int		i;
	int		j;

	j = ft_strlen(s1);
	i = 0;
	while (i < j)
	{
		if (ft_strchr(set, s1[j - i - 1]) == 0)
			break ;
		i++;
	}
	return (j - i);
}

char	*ft_strtrim(const char	*s1, const char *set)
{
	char	*str;
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = ft_get_start(s1, set);
	end = ft_git_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	str = ft_substr(s1, start, end - start);
	return (str);
}
