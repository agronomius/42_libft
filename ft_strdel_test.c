

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}

int		main(void)
{
	char	*str;
	str = (char*)malloc(sizeof(*str) * 10);
	puts("__before_strdel__");
	if (!str)
		write(1, "NULL\n", 5);
	else
		write(1, "NOT NULL\n", 9);
	ft_strdel(&str);
	puts("__after_strdel__");
	if (!str)
		write(1, "NULL", 4);
	else
		write(1, "NOT NULL", 8);
}
