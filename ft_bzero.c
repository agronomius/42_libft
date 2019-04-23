

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*s1;

	s1 = s;
	while (n--)
		*s1++ = 0;
}
