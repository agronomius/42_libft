

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * (size + 1));
	if (!str)
		return(NULL);
	ft_bzero(str, size + 1);
	return (str);
}

int		main(void)
{
	printf("ft_strnew() return: %p\n", ft_strnew(5));
	return (0);
}
