

#include "libft.h"

int 	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int 	main(void)
{
	int c;

	c = 32;
	printf("isprint: %d\n", isprint(c));
	printf("ft_isprint: %d\n", ft_isprint(c));
}
