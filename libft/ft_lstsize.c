#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*sizer;

	i = 0;
	sizer = lst;
	while (sizer)
	{
		i++;
		sizer = sizer->next;
	}
	return (i);
}
