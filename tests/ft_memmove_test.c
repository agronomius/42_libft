

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest1;
	char	*src1;
	size_t	i;

	if (src == dest)
		return (dest);
	dest1 = (char *)dest;
	src1 = (char *)src;
	if (src < dest)
	{
		i = n;
		while (i--)
			dest1[i] = src1[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	return (dest);
}

int		main(void)
{
	char	str[50];

	strcpy(str, "abcdefghijklmn");
	puts(str);

	printf("memmove() return: %p\n", memmove(str + 2, str, 6));
	puts(str + 2);

	printf("ft_memmove() return: %p\n", ft_memmove(str + 2, str, 6));
	puts(str + 2);

	return (0);
}
