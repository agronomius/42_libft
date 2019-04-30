

#include "libft.h"
#define LONG	10000
#define D_ERROR	{ printf("Error Line %d, Funct %s ", __LINE__ - 1, __func__); return (0); }

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char*)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}

int		main(void)
{
	unsigned long	ltab[11];
	size_t			j;
	int				i;

	i = -300;
	memchr(NULL, 0, 0);
	ft_memchr(NULL, 0, 0);
	while (i < 300)
	{
		j = 0;
		while (j < 11)
		{
			ltab[j] = (unsigned long)rand() * LONG;
			j++;
		}
		if (memchr(ltab, i, sizeof(ltab)) != ft_memchr(ltab, i, sizeof(ltab)))
			D_ERROR
		++i;
		printf("i: %d\n", i);
		printf("ltab[j]: %lu\n", ltab[j]);
		printf("sizeof: %zu\n", sizeof(ltab));
		puts("_____");
		printf("memchr: %p\n", memchr(ltab, i, sizeof(ltab)));
		printf("ft_memchr: %p\n", ft_memchr(ltab, i, sizeof(ltab)));
	}
}
