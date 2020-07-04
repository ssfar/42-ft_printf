/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:19:53 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 14:59:56 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, int_fast8_t c)
{
	char	**tab;
	size_t	j;
	size_t	k;

	if (!s || !(tab = ft_memalloc(sizeof(char*) * (ft_count_word(s, c) + 1))))
		return (NULL);
	k = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			j = 0;
			while (s[j] && s[j] != c)
				j++;
			if (!(tab[k++] = ft_strsub(s, 0, j)))
				return (ft_free_strtab(tab));
			while (*s && *s != c)
				s++;
		}
	}
	return (tab);
}
