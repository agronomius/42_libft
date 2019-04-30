

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s) + 1;
	while (len--)
	{
		if (s[len] == c)
			return ((char *)&s[len]);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	str[50];

	if (argc > 1)
	{
		strcpy(str, argv[1]);
		puts(str);

		printf("strrchr() return: %p\n", strrchr(str, '\0'));

		printf("ft_strrchr() return: %p\n", ft_strrchr(str, '\0'));
	}
	return (0);
}
