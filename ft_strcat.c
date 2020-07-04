/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:43:15 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/18 18:57:25 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;

	if (s1 && s2)
	{
		i = 0;
		while (s1[i])
			i++;
		while (*s2)
			s1[i++] = *s2++;
		s1[i] = '\0';
	}
	return (s1);
}
