

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	if (!*s2)
		return ((char *)s1);
	len = ft_strlen(s2);
	while (*s1 && n-- >= len)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, len) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}

int		main(void)
{
	char	s1[50];
	char	s2[50];

	strcpy(s1, "dub dubs bbb");
	puts(s1);

	strcpy(s2, "dubs");
	puts(s2);

	printf("strnstr() return: %s\n", strnstr(s1, s2, 9));
	printf("ft_strnstr() return: %s\n", ft_strnstr(s1, s2, 9));

	return (0);
}
