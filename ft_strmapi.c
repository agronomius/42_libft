/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coclayto <coclayto@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 05:06:25 by coclayto          #+#    #+#             */
/*   Updated: 2019/04/27 05:06:31 by coclayto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s1;
	size_t			len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s);
	s1 = ft_strnew(len + 1);
	if (s && f)
		while (i < len)
		{
			s1[i] = f(i, s[i]);
			i++;
		}
		s1[i] = '\0';
	return (s1);
}
