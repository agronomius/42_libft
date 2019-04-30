

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
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

		strcpy(dst, "hello ");
		puts(dst);

		printf("strcat() return: %s\n", strcat(dst, str));

		printf("ft_strcat() return: %s\n", ft_strcat(dst, str));
   }
   return(0);
}
