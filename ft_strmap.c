/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coclayto <coclayto@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 22:40:10 by coclayto          #+#    #+#             */
/*   Updated: 2019/04/28 22:40:13 by coclayto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s1;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	s1 = ft_strnew(len + 1);
	if (s && f)
	{
		while (i < len)
		{
			s1[i] = f(s[i]);
			i++;
		}
		s1[i] = '\0';
	}
	return (s1);
}
