

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	len;

	if (!*s2)
		return ((char *)s1);
	len = ft_strlen(s2);
	while (*s1)
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

	strcpy(s1, "   \n");
	puts(s1);

	strcpy(s2, "  \n");
	puts(s2);

	printf("strstr() return: %p\n", strstr(s1, s2));
	printf("ft_strstr() return: %p\n", ft_strstr(s1, s2));

	return (0);
}
