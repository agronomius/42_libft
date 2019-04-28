

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*s1;
	size_t	len;
	size_t	trim;
	size_t	i;
	size_t	j;

	if (s)
	{
		i = 0;
		j = 0;
		len = ft_strlen(s);
		while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
			len--;
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j++;
		s1 = (char *)malloc(sizeof(*s1) * (len - j + 1));
		trim = j;
		while (i < (len - trim))
			s1[i++] = s[j++];
		s1[i] = '\0';
		return (s1);
	}
	return (NULL);
}

int		main(void)
{
	char	s1[50];

	strcpy(s1, "  	\n g Hello, \n");
	puts(s1);

	printf("ft_strjoin() return: %s\n", ft_strtrim(s1));

	return(0);
}
