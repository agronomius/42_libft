

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = malloc(size);
	if (!mem)
		return(NULL);
	ft_bzero(mem, size);
	return (mem);
}

int		main(void)
{
	printf("ft_memalloc() return: %p\n", ft_memalloc(5));
	return (0);
}
