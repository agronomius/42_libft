

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
		while (*s)
			f(s++);
}

int		main(void)
{
	char str[10] = "Hello";

	puts(str);
	ft_striter(str, ft_strclr);
	return (0);
}
