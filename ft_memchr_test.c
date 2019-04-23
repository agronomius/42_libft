

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

int		main(int argc, char **argv)
{
	char	str[50];

	if (argc > 1)
	{
		strcpy(str, argv[1]);
		puts(str);

		printf("memchr() return: %p\n", memchr(str, ' ', 7));

		printf("ft_memchr() return: %p\n", ft_memchr(str, 'g', 8));
	}
	return (0);
}
