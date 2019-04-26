

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	s1 = (char *)malloc(sizeof(*s1) * (len + 1));
	if (!s1)
		return (NULL);
	while (i < len)
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = '\0';
	return ((char *)s1);
}
