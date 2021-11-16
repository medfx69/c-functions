/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:31:25 by mait-aad          #+#    #+#             */
/*   Updated: 2021/11/15 10:09:52 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_wo(const char	*s, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (i);
}

static int	ft_nextc(const char *s, char c, int i)
{
	while (s[i] == c && s[i])
		i++;
	return (i);
}

static char	*ft_cpyfstptr(char	*ptr, const char	*s, int start, char c)
{
	int	i;

	i = 0;
	while (s[start] != c && s[start])
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static char	**ft_that_do_the_job(char const	*s,	char c, int counter, char **ptr)
{
	int		i;
	int		start;
	int		stop;

	i = 0;
	stop = 0;
	start = 0;
	while (i < counter)
	{
		start = ft_nextc(s, c, stop);
		stop = start;
		while (s[stop] != c && s[stop])
			stop++;
		ptr[i] = (char *)malloc(stop - start + 1);
		if (!ptr)
			free((void *)ptr[i]);
		ptr [i] = ft_cpyfstptr(ptr[i], s, start, c);
		i++;
	}
	if (!ptr)
		free(ptr);
	ptr[i] = 0;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		counter;

	if (!s)
		return (0);
	else
	{
		counter = ft_count_wo(s, c);
		ptr = (char **)malloc((counter + 1) * sizeof(char *));
		if (!ptr)
			return (0);
		else
			return (ft_that_do_the_job(s, c, counter, ptr));
	}
}
