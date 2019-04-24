

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*s1;
	const char	*s2;
	char		*temp;

	i = n;
	s1 = dest;
	s2 = src;
	temp = (char *)malloc(sizeof(*temp) * n);
	if (!temp)
		return (0);
	while (n--)
		temp[n] = s2[n];
	while (i--)
		*s1++ = *temp++;
	return (dest);
}
