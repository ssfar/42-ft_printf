/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_boxpxx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 15:41:03 by ssfar             #+#    #+#             */
/*   Updated: 2019/08/04 17:54:38 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_put_b(t_flag *f, size_t unb, char *str)
{
	int_fast32_t len;

	len = ft_strlen(str);
	if (f->sharp && unb != 0)
		f->width -= 2;
	f->width -= len;
	if (f->precision > len)
		f->width -= f->precision - len;
	else if (unb == 0 && f->dot && f->precision == 0)
		f->width += len;
	if (!f->minus && (!f->zero || f->dot))
		ft_buffer_char(f, ' ', f->width);
	if (f->sharp && unb != 0)
		ft_buffer_str(f, "0b", 2);
	if (f->zero && !f->dot && !f->minus)
		ft_buffer_char(f, '0', f->width);
	if (f->precision > len)
		ft_buffer_char(f, '0', f->precision - len);
	if (unb != 0 || !f->dot || f->precision != 0)
		ft_buffer_str(f, str, len);
	if (f->minus)
		ft_buffer_char(f, ' ', f->width);
	if (str)
		free(str);
}

void	ft_put_o(t_flag *f, size_t unb, char *str)
{
	int_fast32_t len;

	len = ft_strlen(str);
	if (f->sharp && unb != 0)
		len++;
	f->width -= len;
	if (f->precision > len)
		f->width -= f->precision - len;
	else if (unb == 0 && f->dot && f->precision == 0 && !f->sharp)
		f->width += len;
	if (!f->minus && (!f->zero || f->dot))
		ft_buffer_char(f, ' ', f->width);
	if (unb > 0 && f->sharp)
		ft_buffer_char(f, '0', 1);
	if (f->zero && !f->minus && !f->dot)
		ft_buffer_char(f, '0', f->width);
	if (f->precision > len)
		ft_buffer_char(f, '0', f->precision - len);
	if (unb != 0 || !f->dot || f->precision != 0 || f->sharp)
		ft_buffer_str(f, str, len);
	if (f->minus)
		ft_buffer_char(f, ' ', f->width);
	if (str)
		free(str);
}

void	ft_put_x(t_flag *f, size_t unb, char *str)
{
	int_fast32_t len;

	len = ft_strlen(str);
	if (f->sharp && unb != 0)
		f->width -= 2;
	f->width -= len;
	if (f->precision > len)
		f->width -= f->precision - len;
	else if (unb == 0 && f->dot && f->precision == 0)
		f->width += len;
	if (!f->minus && (!f->zero || f->dot))
		ft_buffer_char(f, ' ', f->width);
	if (f->sharp && unb != 0)
		ft_buffer_str(f, "0x", 2);
	if (f->zero && !f->dot && !f->minus)
		ft_buffer_char(f, '0', f->width);
	if (f->precision > len)
		ft_buffer_char(f, '0', f->precision - len);
	if (unb != 0 || !f->dot || f->precision != 0)
		ft_buffer_str(f, str, len);
	if (f->minus)
		ft_buffer_char(f, ' ', f->width);
	if (str)
		free(str);
}

void	ft_put_xx(t_flag *f, size_t unb, char *str)
{
	int_fast32_t len;

	len = ft_strlen(str);
	if (f->sharp && unb > 0)
		f->width -= 2;
	f->width -= len;
	if (f->precision > len)
		f->width -= f->precision - len;
	else if (unb == 0 && f->dot && f->precision == 0)
		f->width += len;
	if (!f->minus && (!f->zero || f->dot))
		ft_buffer_char(f, ' ', f->width);
	if (f->sharp && unb != 0)
		ft_buffer_str(f, "0X", 2);
	if (f->zero && !f->dot && !f->minus)
		ft_buffer_char(f, '0', f->width);
	if (f->precision > len)
		ft_buffer_char(f, '0', f->precision - len);
	if (unb != 0 || !f->dot || f->precision != 0)
		ft_buffer_str(f, str, len);
	if (f->minus)
		ft_buffer_char(f, ' ', f->width);
	if (str)
		free(str);
}

void	ft_put_p(t_flag *f, size_t unb)
{
	char			*str;
	int_fast32_t	len;

	str = ft_utoa_base(unb, "0123456789abcdef");
	len = ft_strlen(str);
	f->width -= len + 2;
	if (f->precision > len)
		f->width -= f->precision - len;
	else if (unb == 0 && f->dot && f->precision == 0)
		f->width += len;
	if (!f->minus && (!f->zero || f->dot))
		ft_buffer_char(f, ' ', f->width);
	ft_buffer_str(f, "0x", 2);
	if (f->zero && !f->minus && !f->dot)
		ft_buffer_char(f, '0', f->width);
	if (f->precision > len)
		ft_buffer_char(f, '0', f->precision - len);
	if (unb != 0 || !f->dot || f->precision != 0)
		ft_buffer_str(f, str, len);
	if (f->minus)
		ft_buffer_char(f, ' ', f->width);
	if (str)
		free(str);
}
