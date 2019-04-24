

#include "libft.h"

int 	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int 	main(void)
{
	int c;

	c = 220;
	printf("isascii: %d\n", isascii(c));
	printf("ft_isascii: %d\n", ft_isascii(c));
}
