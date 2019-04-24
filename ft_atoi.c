

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	int		res;
	int		temp;

	i = 0;
	res = 0;
	while (ft_isspace(nptr[i]))
		i++;
	sign = (nptr[i] == '-') ? -1 : 1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		temp = res;
		res = res * 10 + (nptr[i] - '0');
		i++;
		if (sign > 0 && res < temp)
			return (2147483647);
		if (sign < 0 && (sign * res)  > temp)
			return (-2147483648);
	}
	return (sign * res);
}
