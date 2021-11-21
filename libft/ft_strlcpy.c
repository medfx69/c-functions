/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:27:10 by mait-aad          #+#    #+#             */
/*   Updated: 2021/11/14 18:16:16 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	i;
	char	*s;

	s = (char *) src;
	len_src = ft_strlen(s);
	i = 0;
	if (dstsize > 0)
	{
		while (s[i] && i + 1 < dstsize)
		{
			dst[i] = s[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len_src);
}
