

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
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
		strcpy(s1, "abv788");
		puts(s1);

		strcpy(s2, argv[1]);
		puts(s2);

		printf("strncmp() return: %d\n", strncmp(s1, s2, 6));

		printf("ft_strncmp() return: %d\n", ft_strncmp(s1, s2, 6));
	}
	return (0);
}
