

#include "libft.h"

char *ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

int		main(void)
{
	char	str[50];
	char	dst[50];

	strcpy(str, "abcdefghi");
	puts(str);

	strcpy(dst, "abcde");
	puts(dst);

	printf("strncpy() return: %s\n", strncpy(dst, str, 7));
	printf("strncpy() return: %p\n", strncpy(dst, str, 7));
	printf("ft_strncpy() return: %s\n", ft_strncpy(dst, str, 7));
	printf("ft_strncpy() return: %p\n", ft_strncpy(dst, str, 7));

	return(0);
}
