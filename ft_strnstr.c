/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:36:27 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/22 14:25:59 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	if (!haystack || !needle)
		return (NULL);
	i = 0;
	while (haystack[i] && *needle && i != len)
	{
		tmp = i;
		j = 0;
		while (haystack[tmp] == needle[j]
				&& haystack[tmp++] && needle[j++] && tmp != len)
			;
		if (!needle[j])
			return ((char*)haystack + i);
		i++;
	}
	return (!*needle ? (char*)haystack : NULL);
}
