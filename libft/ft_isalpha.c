int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		if (c >= 'a' || c <= 'Z')
			return (1);
	}
	return (0);
}
