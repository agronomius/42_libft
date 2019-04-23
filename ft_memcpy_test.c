

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*s1;
	const char	*s2;

	s1 = dest;
	s2 = src;
	while (n--)
		*s1++ = *s2++;
	return (dest);
}

int		main(int argc, char **argv)
{
	char	str[50];
	char	dst[50];

	if (argc > 1)
	{
		strcpy(str, argv[1]);
		puts(str);

		printf("memcpy_return: %p\n", memcpy(dst, str, 2));
		puts(dst);

		printf("ft_memcpy_return: %p\n", ft_memcpy(dst, str, 2));
		puts(dst);
	}
	return (0);
}
