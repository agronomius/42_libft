

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (s1 && s2)
	{
		while (i < n && s1[i] == s2[i] && (s1[i] && s2[i]))
		{
			if (s1[i] == s2[i])
				i++;
		}
		if (i == n || (!s1[i] && !s2[i]))
			return (1);
	}
	return (0);
}

int		main(void)
{
	char	s1[50];
	char	s2[50];

	strcpy(s1, "123000");
	puts(s1);

	strcpy(s2, "12309");
	puts(s2);

	printf("ft_strnequ() return: %d\n", ft_strnequ(s1, s2, 15));
	return (0);
}
