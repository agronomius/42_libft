

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	point;

	i = 0, j = 0;
	while (i <= len)
	{
		if (little[j] == '\0')
			return ((char *)big);
		while (big[i] != little[j] && i <= len)
			i++;
		point = i;
		while (big[i] == little[j] && i <= len)
		{
			if (!little[j])
				return ((char *)&big[point]);
			i++;
			j++;
		}
		if (!little[j])
			return ((char *)&big[point]);
		j = 0;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	s1[50];
	char	s2[50];

	if (argc > 1)
	{
		strcpy(s1, "Luke, I am your father");
		puts(s1);

		strcpy(s2, argv[1]);
		puts(s2);

		printf("m_strnstr() return: %s\n", m_strnstr(s1, s2, 20));

		printf("ft_strnstr() return: %s\n", ft_strnstr(s1, s2, 20));
	}
	return (0);
}
