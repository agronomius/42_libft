

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	point;

	i = 0, j = 0;
	while (i <= len)
	{
		if (s2[j] == '\0')
			return ((char *)s1);
		while (s1[i] != s2[j] && i <= len)
			i++;
		point = i;
		while (s1[i] == s2[j] && i <= len)
		{
			if (!s2[j])
				return ((char *)&s1[point]);
			i++;
			j++;
		}
		if (!s2[j])
			return ((char *)&s1[point]);
		j = 0;
	}
	return (0);
}
