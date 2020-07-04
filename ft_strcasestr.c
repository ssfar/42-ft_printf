/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 17:14:25 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 15:26:26 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcasestr(const char *haystack, const char *needle)
{
	size_t	i;

	if (!haystack || !needle)
		return (NULL);
	while (*needle && *haystack && ft_casecmp(*haystack, *needle))
		haystack++;
	if (!*needle || !*haystack)
		return (!*needle ? (char*)haystack : NULL);
	i = 0;
	while (needle[i])
	{
		if (ft_casecmp(haystack[i], needle[i]))
			return (ft_strcasestr(++haystack, needle));
		i++;
	}
	return ((char*)haystack);
}
