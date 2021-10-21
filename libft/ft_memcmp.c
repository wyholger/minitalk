#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*parr1;
	unsigned char	*parr2;
	int				result;

	parr1 = (unsigned char *)arr1;
	parr2 = (unsigned char *)arr2;
	while (n--)
	{
		if (parr1[0] != parr2[0])
		{
			result = parr1[0] - parr2[0];
			return (result);
		}
		parr1++;
		parr2++;
	}
	return (0);
}
