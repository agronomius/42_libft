

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

int		main(void)
{
	printf("[1]\natoi: %d\n", atoi("56834"));
	printf("ft_atoi: %d\n", ft_atoi("56834"));
	printf("[2]\natoi: %d\n", atoi("  sdfh56834"));
	printf("ft_atoi: %d\n", ft_atoi("  sdfh56834"));
	printf("[3]\natoi: %d\n", atoi(" 	-56834"));
	printf("ft_atoi: %d\n", ft_atoi(" 	-56834"));
	printf("[4]\natoi: %d\n", atoi("	 5346 asf643gsdfh"));
	printf("ft_atoi: %d\n", ft_atoi("	 5346 asf643gsdfh"));
	printf("[5]\natoi: %d\n", atoi(""));
	printf("ft_atoi: %d\n", ft_atoi(""));
	printf("[6]\natoi: %d\n", atoi("0"));
	printf("ft_atoi: %d\n", ft_atoi("0"));
	printf("[7]\natoi: %d\n", atoi("\0"));
	printf("ft_atoi: %d\n", ft_atoi("\0"));
	printf("[8]\natoi: %d\n", atoi("−9223372036854775828"));
	printf("ft_atoi: %d\n", ft_atoi("−9223372036854775828"));
	printf("[9]\natoi: %d\n", atoi("−9223372036854775028"));
	printf("ft_atoi: %d\n", ft_atoi("−9223372036854775028"));
	printf("[10]\natoi: %d\n", atoi("9223372036854775828"));
	printf("ft_atoi: %d\n", ft_atoi("9223372036854775828"));
	printf("[11]\natoi: %d\n", atoi("9223372036854775808"));
	printf("ft_atoi: %d\n", ft_atoi("9223372036854775808"));
}
