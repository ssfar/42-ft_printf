/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 18:20:06 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 16:15:57 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, size_t start, size_t len)
{
	char	*tmp;
	size_t	i;

	if (!s || start > ft_strlen(s)
		|| !(tmp = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s[start] && i < len)
		tmp[i++] = s[start++];
	tmp[i] = '\0';
	return (tmp);
}
