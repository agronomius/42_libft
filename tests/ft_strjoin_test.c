

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	s1_len;
	size_t	s3_len;
	size_t	i;

	if (s1 && s2)
	{
	i = 0;
	s1_len = ft_strlen(s1);
	s3_len = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *)malloc(sizeof(*s3) * (s3_len + 1));
	if (!s3)
		return (NULL);
	s3 = ft_strcpy(s3, s1);
	while (s2[i])
		s3[s1_len++] = s2[i++];
	s3[s1_len] = '\0';
	return (s3);
	}
	return (NULL);
}

int		main(void)
{
	char	s1[50];
	char	s2[50];

	strcpy(s1, "Hello, ");
	puts(s1);

	strcpy(s2, "my friend");
	puts(s2);

	printf("ft_strjoin() return: %s\n", ft_strjoin(s1, s2));

	return(0);
}
