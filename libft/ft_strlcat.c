/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:52:43 by mait-aad          #+#    #+#             */
/*   Updated: 2021/11/18 12:14:52 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	res;
	size_t	len_src;
	size_t	i;
	char	*s;

	s = (char *) src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(s);
	res = 0;
	if (size > len_dst)
		res = len_src + len_dst;
	else
		return (len_src + size);
	i = 0;
	while (s[i] && len_dst < size - 1)
	{
		dst[len_dst] = s[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}
