

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	point;

	i = 0;
	j = 0;
	if (!needle[j])
		return ((char *)&haystack[j]);
	while (haystack[i])
	{
		while (haystack[i] != needle[j] && haystack[i])
			i++;
		point = i;
		while (haystack[i] == needle[j])
		{
			if (!haystack[i] && !needle[j])
				return ((char *)&haystack[point]);
			i++;
			j++;
		}
		if (!needle[j])
			return ((char *)&haystack[point]);
		j = 0;
	}
	return (0);
}

int		main(void)
{
	char	s1[50];
	char	s2[50];

	strcpy(s1, "   \n");
	puts(s1);

	strcpy(s2, "  \n");
	puts(s2);

	printf("strstr() return: %p\n", strstr(s1, s2));
	printf("ft_strstr() return: %p\n", ft_strstr(s1, s2));

	return (0);
}
