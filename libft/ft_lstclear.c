#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*pointer;

	pointer = *lst;
	temp = *lst;
	if (!lst)
		return ;
	while (pointer)
	{
		pointer = pointer->next;
		del(temp->content);
		free(temp);
		temp = pointer;
	}
	*lst = NULL;
}
