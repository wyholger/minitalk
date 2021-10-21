#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	pointer = malloc(nmemb * size);
	if (!pointer)
	{
		return (NULL);
	}
	ft_bzero (pointer, nmemb * size);
	return (pointer);
}
