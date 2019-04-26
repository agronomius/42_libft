

#include "libft.h"

void	ft_strclr(char *s)
{
	if (s)
		while (*s)
			*s++ = '\0';
}

int		main(void)
{
	char str[10] = "Hello";

	puts(str);
	ft_strclr(str);
	return (0);
}
