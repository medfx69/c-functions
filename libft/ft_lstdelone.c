/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 23:42:51 by mait-aad          #+#    #+#             */
/*   Updated: 2021/11/16 23:46:40 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list	*lst, void (*del)(void*))
{
	while (lst != NULL)
	{
		del(lst->content);
		lst = lst->next;
	}
}
