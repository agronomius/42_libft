

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*s1;

	i = 0;
	s1 = s;
	while (i < n)
	{
		if (s1[i] == c)
			return ((char *)&s1[i]);
		i++;
	}
	return (0);
}
