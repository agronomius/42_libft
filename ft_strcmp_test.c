

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i])
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
		strcpy(s1, "abv78");
		puts(s1);

		strcpy(s2, argv[1]);
		puts(s2);

		printf("strcmp() return: %d\n", strcmp(s1, s2));

		printf("ft_strcmp() return: %d\n", ft_strcmp(s1, s2));
	}
	return (0);
}
