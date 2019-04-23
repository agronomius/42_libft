

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*s1;

	s1 = s;
	while (n--)
		*s1++ = 0;
}

int		main(int argc, char **argv)
{
	char	str[50];

	if (argc > 1)
	{
		strcpy(str, argv[1]);
	    puts(str);

	    bzero(str, 1);
	    puts(str);

	    ft_bzero(str, 1);
	    puts(str);
	}
 	return(0);
}
