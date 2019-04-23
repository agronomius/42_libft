

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	point;

	i = 0, j = 0;
	while (haystack[i])
	{
		while (haystack[i] != needle[j])
		{
			if (!haystack[i])
				return (0);
			i++;
		}
		point = i;
		while (haystack[i] == needle[j])
		{
			if (!needle[j])
				return ((char *)&haystack[point]);
			i++, j++;
		}
		if (!needle[j])
			return ((char *)&haystack[point]);
		j = 0;
	}
	return (0);
}
