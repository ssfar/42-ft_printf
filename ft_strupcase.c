/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 15:33:02 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 15:59:24 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strupcase(char *str)
{
	size_t	i;

	if (str)
	{
		i = 0;
		while (str[i])
		{
			if (ft_islower(str[i]))
				str[i] -= 32;
			i++;
		}
	}
	return (str);
}