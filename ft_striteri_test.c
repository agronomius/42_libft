

#include "libft.h"

void	ft_strclr1(unsigned int i, char *s)
{
	if (s)
		while (s[i])
			s[i] = '\0';
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (s && f)
		while (*s)
			(f)(i++, s++);
}

int		main(void)
{
	char str[10] = "Hello";

	puts(str);
	ft_striteri(str, ft_strclr1);
	return (0);
}
