#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	unsigned char	*temp;
	unsigned char	*tempdes;
	size_t			i;
	unsigned char	stop;

	i = 0;
	temp = (unsigned char *)source;
	tempdes = (unsigned char *)destination;
	stop = (unsigned char) c;
	while (n)
	{
		*tempdes = *temp;
		i++;
		if (*temp == stop)
		{
			return (destination + i);
		}		
		tempdes++;
		temp++;
		n = n - sizeof(char);
	}
	return (NULL);
}
