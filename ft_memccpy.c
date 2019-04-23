

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*s1;
	const char	*s2;

	s1 = dest;
	s2 = src;
	while (n)
	{
		*s1 = *s2;
		if (*s1 == c)
		{
			*s1 = *s2;
			return (s1 + 1);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
