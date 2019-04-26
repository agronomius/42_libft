

#include "libft.h"

char 	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

char	*ft_strmap(char const *s, char (*f)(unsigned int, char))
{
	char			*s1;
	size_t			len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s);
	s1 = ft_strnew(len + 1);
	if (s && f)
		while (i < len)
		{
			s1[i] = f(s[i]);
			i++;
		}
		s1[i] = '\0';
	return (s1);
}

int		main(void)
{
	char str[10] = "Hello";

	printf("\nft_strmap() return: %s\n", ft_strmap(str, ft_putchar1));
	return (0);
}
