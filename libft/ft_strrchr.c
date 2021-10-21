#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	i;
	int		flag;

	i = 0;
	flag = -1;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)ch)
			flag = i;
		i++;
	}
	if (ch == '\0')
		return ((char *)str + i);
	if (flag == -1)
		return (NULL);
	return ((char *)str + i - (i - flag));
}
