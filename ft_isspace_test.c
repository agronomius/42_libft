

#include "libft.h"

int 	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	else
		return (0);
}

int 	main(void)
{
	int c;

	c = ' ';
	printf("isspace: %d\n", isspace(c));
	printf("ft_isspace: %d\n", ft_isspace(c));
}
