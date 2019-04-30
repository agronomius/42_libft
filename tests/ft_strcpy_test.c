

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(int argc, char **argv)
{
	char	str[50];
	char	dst[50];

	if (argc > 1)
	{
		strcpy(str, argv[1]);
		puts(str);

		printf("strcpy() return: %s\n", strcpy(dst, str));

		printf("ft_strcpy() return: %s\n", ft_strcpy(dst, str));
   }
   return(0);
}
