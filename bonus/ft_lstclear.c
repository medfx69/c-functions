#include "libft.h"
// void *del(void *l)
// {
// 	while(*l)
// 	free(l--);
// }
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		tmp = *lst;
		*lst = tmp->next;
		free(tmp);
	}
	*lst = NULL;
}
// #include <stdio.h>
// int main()
// {
// 	t_list *nod1;
// 	t_list *nod2;
// 	t_list *nod3;
// 	t_list *tmp;
// 	t_list *tmp2;

// 	nod1->next = nod2;
// 	nod1->content = 2;
// 	nod2->next = nod3;
// 	nod2->content = 5;
// 	nod3->next = NULL;
// 	nod3->content = 7;
// 	tmp = nod1;
// 	tmp2 = nod1;
// 	while(tmp->next)
// 	{
// 		printf("%d",tmp->content);
// 		tmp = tmp->next;
// 	}
// 	ft_lstclear(&tmp2,del);
// 	while(tmp2->next)
// 	{
// 	printf("%d",tmp2->content);
// 	tmp2 = tmp2->next;
// 	}
// }
