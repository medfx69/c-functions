/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:12:04 by mait-aad          #+#    #+#             */
/*   Updated: 2021/11/14 20:17:03 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
