#include <string.h>

void	ft_bzero(void *b, size_t length)
{
	char	*temp;

	temp = b;
	while (length--)
	{
		*temp++ = '\0';
	}
}
