/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:06:10 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 15:02:00 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	if (haystack && needle)
	{
		while (*needle && *haystack && *haystack != *needle)
			haystack++;
		if (!*needle || !*haystack)
			return (!*needle ? (char*)haystack : 0);
		i = 0;
		while (needle[i])
		{
			if (haystack[i] != needle[i])
				return (ft_strstr(++haystack, needle));
			i++;
		}
	}
	return ((char*)haystack);
}
