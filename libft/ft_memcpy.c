/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:36:46 by mait-aad          #+#    #+#             */
/*   Updated: 2021/11/19 21:18:33 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, void const	*src, size_t	n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *) dest;
	s2 = (unsigned char *) src;
	if (dest || src)
	{
		while (n--)
		{
			*s1++ = *s2++;
		}
	}
	return (dest);
}
