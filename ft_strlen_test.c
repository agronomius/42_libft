

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

int		main(int argc, char **argv)
{
	char	str[50];

	if (argc > 1)
	{
		strcpy(str, argv[1]);
		puts(str);

		printf("strlen() return: %d\n", strlen(str));

		printf("ft_strlen() return: %d\n", ft_strlen(str));
   }
   return(0);
}
