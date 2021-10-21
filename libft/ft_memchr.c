#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*temp;
	int				i;

	i = 0;
	temp = (unsigned char *)arr;
	while (n--)
	{
		if (*temp == (unsigned char)c)
		{
			return ((void *)arr + i);
		}
		temp++;
		i++;
	}
	return (NULL);
}
