/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:11:26 by mait-aad          #+#    #+#             */
/*   Updated: 2021/11/16 21:43:11 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	str;

	str = (t_list *)malloc(t_list);
	str->content = content;
	str->next = NULL;
	return (str);
}
