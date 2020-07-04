/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:45:04 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 14:36:51 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint_fast8_t	ft_isalpha(int_fast8_t c)
{
	return (ft_islower(c) || ft_isupper(c));
}
