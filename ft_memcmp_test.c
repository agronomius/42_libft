

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*sc1;
	const char	*sc2;

	i = 0;
	sc1 = s1;
	sc2 = s2;
	while (i < n)
	{
		if (sc1[i] == sc2[i])
			i++;
		else if (sc1[i] > sc2[i])
			return (1);
		else
			return (-1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	s1[50];
	char	s2[50];

	if (argc > 1)
	{
		strcpy(s1, argv[1]);
		puts(s1);

		strcpy(s2, "");
		puts(s2);

		printf("memcmp() return: %d\n", memcmp(s1, s2, 5));

		printf("ft_memcmp() return: %d\n", ft_memcmp(s1, s2, 5));
	}
	return (0);
}
