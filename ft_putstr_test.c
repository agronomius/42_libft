

#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}


int		main(void)
{
	char	*str;

	str = "HELLOooO_ 	!";
	ft_putstr(str);
}
