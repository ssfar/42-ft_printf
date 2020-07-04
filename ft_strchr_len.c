/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 23:20:31 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 14:14:30 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strchr_len(const char *s, int_fast8_t c)
{
	size_t	len;

	len = 0;
	if (s)
		while (s[len] != c && s[len])
			len++;
	return (len);
}
