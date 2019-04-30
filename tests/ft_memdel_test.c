

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (ap && *ap)
	{
		free(*ap);
		*ap = NULL;
	}
}

int		main(void)
{
	void	*mem = (char*)ft_memalloc(2);

	puts("__before_memdel__");
	if (!mem)
		write(1, "NULL\n", 5);
	else
		write(1, "NOT NULL\n", 9);
	ft_memdel(&mem);
	puts("__after_memdel__");
	if (!mem)
		write(1, "NULL", 4);
	else
		write(1, "NOT NULL", 8);
}
