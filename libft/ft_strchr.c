char	*ft_strchr(const char	*str, int c)
{
	char	*s;

	s = (char *)str;
	while (*s != (char) c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return (s);
}
