

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;
	size_t	catsize;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	catsize = size - destlen - 1;
	while (i < catsize)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
