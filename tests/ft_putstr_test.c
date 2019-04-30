

#include "libft.h"

void	ft_putstr(char const *s)
{
	ft_putstr_fd(s, 1);
}


int		main(void)
{
	char	str[10] = "Hello";
	ft_putstr(str);
	return (0);
}
