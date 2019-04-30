

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	catlen;
	size_t	srclen;
	size_t	destlen;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	catlen = size - destlen - 1;
	if (size <= destlen)
		return (srclen + size);
	while ((i < catlen) && src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (srclen + destlen);
}

int		main(void)
{
	char	str[50];
	char	dst[50];

	strcpy(str, " my friend");
	puts(str);

	strcpy(dst, "hello");
	puts(dst);
	printf("strlen(dst): %zu\n", strlen(dst));

	printf("strlcat() return: %lu\n", strlcat(dst, str, sizeof(dst)));
	printf("sizeof(dst) %lu\n", sizeof(dst));
	puts(dst);

	printf("ft_strlcat() return: %lu\n", ft_strlcat(dst, str, sizeof(str)));
	puts(dst);

   return(0);
}
