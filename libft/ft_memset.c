/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:14:27 by mait-aad          #+#    #+#             */
/*   Updated: 2021/11/11 20:25:37 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int src, size_t n)
{
	unsigned char	*str;
	unsigned char	c;

	str = (unsigned char *) dest;
	c = (unsigned char)src;
	while (n > 0)
	{
		*str++ = c;
		n--;
	}
	return (dest);
}
