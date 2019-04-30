

#include "libft.h"

char	mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
		printf("i: %d\n", i);
		printf("indexArray[i]: %d\n", indexArray[i]);
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s1;
	size_t			len;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	s1 = (char *)malloc(len + 1);
	if (!s1)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(void)
{
	char str[10] = "Helloo";

	printf("ft_strmap() return: %s\n", ft_strmapi(str, mapi));
	return (0);
}
