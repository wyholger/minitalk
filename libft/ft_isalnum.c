#include "libft.h"

int	ft_isalnum(int character)
{
	if (ft_isdigit(character) || ft_isalpha(character))
	{
		return (1);
	}
	return (0);
}
