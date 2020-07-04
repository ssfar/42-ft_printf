/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:26:45 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/18 17:57:30 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(ssize_t n, int_fast16_t fd)
{
	size_t	unb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		unb = -n;
	}
	else
		unb = n;
	if (unb >= 10)
		ft_putnbr_fd(unb / 10, fd);
	ft_putchar_fd(unb % 10 + '0', fd);
}
