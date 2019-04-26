

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*s1;
	const char	*s2;
	char		*temp;

	i = n;
	s1 = dest;
	s2 = src;
	temp = (char *)malloc(sizeof(*temp) * n);
	if (!temp)
		return (NULL);
	while (n--)
		temp[n] = s2[n];
	while (i--)
		*s1++ = *temp++;
	return (dest);
}

int		main(int argc, char **argv)
{
	char	dst[50];

	if (argc > 1)
	{
		strcpy(dst, argv[1]);
		puts(dst);

		printf("memmove() return: %p\n", memmove(dst + 2, dst, 6));
		puts(dst + 2);

		printf("ft_memmove() return: %p\n", ft_memmove(dst + 2, dst, 6));
		puts(dst + 2);
	}
	return (0);
}
