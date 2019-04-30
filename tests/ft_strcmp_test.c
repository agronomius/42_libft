

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*sc1;
	unsigned char	*sc2;

	i = 0;
	sc1 = (unsigned char *)s1;
	sc2 = (unsigned char *)s2;
	while (sc1[i] || sc2[i])
	{
		if (sc1[i] == sc2[i])
			i++;
		else
			return (sc1[i] - sc2[i]);
	}
	return (0);
}


int		main(int argc, char **argv)
{
	char	s1[50];
	char	s2[50];

	if (argc > 1)
	{
		strcpy(s1, "abv78");
		puts(s1);

		strcpy(s2, argv[1]);
		puts(s2);

		printf("strcmp() return: %d\n", strcmp(s1, s2));

		printf("ft_strcmp() return: %d\n", ft_strcmp(s1, s2));
	}
	return (0);
}
