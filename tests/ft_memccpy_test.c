

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	while (n)
	{
		*s1 = *s2;
		if (*s1 == (unsigned char)c)
		{
			*s1 = *s2;
			return (s1 + 1);
		}
		s1++;
		s2++;
		n--;
	}
	return (NULL);
}

int		main(void)
{
	char	str[50];
	char	dst[50];

	strcpy(str, "abcdefghijklmnopqrst");
	puts(str);

	strcpy(dst, "Hello my friend");
	puts(dst);

	printf("memccpy() return: %p\n", memccpy(dst, str, ' ', 8));
	puts(dst);
	printf("ft_memccpy() return: %p\n", ft_memccpy(dst, str, ' ', 8));
	puts(dst);

	return (0);
}
