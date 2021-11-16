/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:41:03 by mait-aad          #+#    #+#             */
/*   Updated: 2021/11/15 10:10:24 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_arrlen(char const	*arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*ptr;
	int		j;
	int		k;
	int		i;

	if (s1 && s2)
	{
		k = ft_arrlen(s1);
		j = ft_arrlen(s2);
		ptr = malloc(k + j + 1);
		if (!ptr)
			return (NULL);
		i = -1;
		while (i++ < k)
				ptr[i] = s1[i];
		i = 0;
		while (i < j)
			ptr[k++] = s2[i++];
		ptr[k] = '\0';
		return (ptr);
	}
	return (NULL);
}
