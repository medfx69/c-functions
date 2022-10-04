#include "libft.h"

void	ft_lstdelone(t_list	*lst, void (*del)(void*))
{
	while (lst != NULL)
	{
		del(lst->content);
		lst = lst->next;
	}
}
