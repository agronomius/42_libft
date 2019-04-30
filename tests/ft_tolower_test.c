

#include "libft.h"

int 	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int 	main(void)
{
	int c;

	c = 'A';
	printf("tolower: %c\n", tolower(c));
	printf("ft_tolower: %c\n", ft_tolower(c));
}
