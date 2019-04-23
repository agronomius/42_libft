

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (len < n)
	{
		while (src[i++])
			dest[i] = '\0';
	}
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

		printf("strncpy() return: %s\n", strncpy(dst, str, 0));

		printf("ft_strncpy() return: %s\n", ft_strncpy(dst, str, 0));
   }
   return(0);
}
