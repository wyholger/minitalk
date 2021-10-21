#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)ch)
		{
			return ((char *)str + i);
		}
		i++;
	}
	if (ch == '\0' && str[i] == '\0')
	{
		return ((char *)str + i);
	}
	return (NULL);
}
