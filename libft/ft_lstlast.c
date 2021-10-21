#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*title;

	title = lst;
	if (title == NULL)
		return (title);
	while (title->next)
		title = title->next;
	return (title);
}
