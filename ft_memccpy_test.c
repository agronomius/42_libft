

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

int		main(int argc, char **argv)
{
	char	str[50];
	char	dst[50];

	if (argc > 1)
	{
		strcpy(str, argv[1]);
		puts(str);

		strcpy(dst, "abcdefghijklmnopqrstuvwxyz");
		puts(dst);

		printf("memccpy() return: %p\n", memccpy(dst, str, ' ', 8));
		puts(dst);

		printf("ft_memccpy() return: %p\n", ft_memccpy(dst, str, ' ', 8));
		puts(dst);
	}
	return (0);
}
