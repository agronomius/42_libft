

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*s1;

	s1 = s;
	while (n--)
		*s1++ = c;
	return (s);
}

int		main(int argc, char **argv)
{
	char	str[50];

	if (argc > 1)
	{
		strcpy(str, argv[1]);
		puts(str);

		printf("memset() return: %p\n", memset(str, '$', 8));
		puts(str);

		printf("ft_memset() return: %p\n", ft_memset(str, '_', 4));
		puts(str);
   }
   return(0);
}
