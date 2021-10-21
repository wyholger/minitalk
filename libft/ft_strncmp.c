#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		g;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			g = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (g);
		}
	}
	return (0);
}
