/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:16:28 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 14:43:06 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;

	if (!(ptr = (char*)malloc(sizeof(*ptr) * size + 1)))
		return (NULL);
	return (ft_memset(ptr, '\0', size + 1));
}
