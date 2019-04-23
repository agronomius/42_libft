

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;
	size_t	catsize;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	catsize = size - destlen - 1;
	while (i < catsize)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}

int		main(int argc, char **argv)
{
	char	str[50];
	char	dst[10];

	if (argc > 1)
	{
		strcpy(str, argv[1]);
		puts(str);

		strcpy(dst, "hello");
		puts(dst);

		printf("strlcat() return: %d\n", strlcat(dst, str, sizeof(str)));
		puts(dst);

		printf("ft_strlcat() return: %d\n", ft_strlcat(dst, str, sizeof(str)));
		puts(dst);
   }
   return(0);
}
