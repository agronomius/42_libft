/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coclayto <coclayto@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 22:42:05 by coclayto          #+#    #+#             */
/*   Updated: 2019/04/28 22:43:15 by coclayto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	point;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		while (haystack[i] != needle[j] && haystack[i])
			i++;
		point = i;
		while (haystack[i] == needle[j])
		{
			if (!needle[j])
				return ((char *)&haystack[point]);
			i++;
			j++;
		}
		if (!needle[j])
			return ((char *)&haystack[point]);
		j = 0;
	}
	return (0);
}
