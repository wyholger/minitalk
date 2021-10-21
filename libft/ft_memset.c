#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	long long unsigned int	i;
	char					*temp;

	temp = destination;
	i = 0;
	while (i < n)
	{
		*temp = c;
		temp++;
		i++;
	}
	return (destination);
}
