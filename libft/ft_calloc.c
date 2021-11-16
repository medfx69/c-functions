/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:15:51 by mait-aad          #+#    #+#             */
/*   Updated: 2021/11/14 18:21:48 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	total;
	int		i;

	total = count * size;
	ptr = malloc (total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (total--)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
