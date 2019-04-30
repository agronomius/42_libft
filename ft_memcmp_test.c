

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*sc1;
	unsigned char	*sc2;

	i = 0;
	sc1 = (unsigned char *)s1;
	sc2 = (unsigned char *)s2;
	while (i < n)
	{
		if (sc1[i] == sc2[i])
			i++;
		else
			return (sc1[i] - sc2[i]);
	}
	return (0);
}

int		main(void)
{
	char	s1[50];
	char	s2[50];

	strcpy(s1, "abcdef2");
	puts(s1);

	strcpy(s2, "abddef1");
	puts(s2);

	printf("memcmp() return: %d\n", memcmp(s1, s2, 5));
	printf("ft_memcmp() return: %d\n", ft_memcmp(s1, s2, 5));

	return (0);
}
