

#include "libft.h"

int		ft_strequ(const char *s1, const char *s2)
{
	size_t		i;

	i = 0;
	if (s1 && s2)
	{
		while (s1[i] == s2[i] && (s1[i] && s2[i]))
		{
			if (s1[i] == s2[i])
				i++;
		}
		if (!s1[i] && !s2[i])
			return (1);
	}
	return (0);
}

int		main(void)
{
	char	s1[50];
	char	s2[50];

	strcpy(s1, "	090");
	puts(s1);

	strcpy(s2, "	00");
	puts(s2);

	printf("ft_strequ() return: %d\n", ft_strequ(s1, s2));
	return (0);
}
