

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

int		main(int argc, char **argv)
{
	char	s1[50];
	char	s2[50];

	if (argc > 1)
	{
		strcpy(s1, "Luke, I am your father");
		puts(s1);

		strcpy(s2, argv[1]);
		puts(s2);

		printf("strstr() return: %p\n", strstr(s1, s2));

		printf("ft_strstr() return: %p\n", ft_strstr(s1, s2));
	}
	return (0);
}
