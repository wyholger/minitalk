#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	char	*temp;
	char	*tempdes;

	temp = (char *)source;
	tempdes = destination;
	if (!destination && !source)
	{
		return (NULL);
	}
	while (n)
	{
		*tempdes = *temp;
		tempdes++;
		temp++;
		n = n - sizeof(char);
	}
	return (destination);
}
