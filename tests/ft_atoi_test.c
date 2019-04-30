

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	size_t		i;
	long int	sign;
	long int	res;
	int			temp;

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
			return (-1);
		if (sign < 0 && (sign * res)  > temp)
			return (0);
	}
	return (sign * res);
}

int		main(void)
{
	printf("[1]\natoi: %d\n", atoi("\n\v\t\r\f -123"));
	printf("ft_atoi: %d\n", ft_atoi("\n\v\t\r\f -123"));
	printf("[2]\natoi: %d\n", atoi("12-3"));
	printf("ft_atoi: %d\n", ft_atoi("12-3"));
	printf("[3]\natoi: %d\n", atoi("-+123"));
	printf("ft_atoi: %d\n", ft_atoi("-+123"));
	printf("[4]\natoi: %d\n", atoi("a123"));
	printf("ft_atoi: %d\n", ft_atoi("a123"));
	printf("[5]\natoi: %d\n", atoi("123a"));
	printf("ft_atoi: %d\n", ft_atoi("123a"));
	printf("[6]\natoi: %d\n", atoi("123"));
	printf("ft_atoi: %d\n", ft_atoi("123"));
	printf("[7]\natoi: %d\n", atoi("-123"));
	printf("ft_atoi: %d\n", ft_atoi("-123"));
	printf("[8]\natoi: %d\n", atoi("+123"));
	printf("ft_atoi: %d\n", ft_atoi("+123"));
	printf("[9]\natoi: %d\n", atoi(" - 123"));
	printf("ft_atoi: %d\n", ft_atoi(" - 123"));
	printf("[10]\natoi: %d\n", atoi("\t -123"));
	printf("ft_atoi: %d\n", ft_atoi("\t -123"));
	printf("[11]\natoi: %d\n", atoi("-2147483648"));
	printf("ft_atoi: %d\n", ft_atoi("-2147483648"));
	printf("[12]\natoi: %d\n", atoi("2147483647"));
	printf("ft_atoi: %d\n", ft_atoi("2147483647"));
	printf("[12]\natoi: %d\n", atoi(""));
	printf("ft_atoi: %d\n", ft_atoi(""));
}
