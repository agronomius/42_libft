

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dest);
	while (i < n && src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

int		main(int argc, char **argv)
{
	char	str[3];
	char	dst[50];

	if (argc > 1)
	{
		strcpy(str, argv[1]);
		puts(str);

		strcpy(dst, "hello my friend");
		puts(dst);

		printf("strncat() return: %s\n", strncat(dst, str, 15));

		printf("ft_strncat() return: %s\n", ft_strncat(dst, str, 15));
   }
   return(0);
}
