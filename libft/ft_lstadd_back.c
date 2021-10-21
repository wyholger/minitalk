#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_title;

	if (!lst || !new)
		return ;
	last_title = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (last_title->next)
	{
		last_title = last_title->next;
	}
	last_title->next = new;
}
