/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 17:35:12 by ssfar             #+#    #+#             */
/*   Updated: 2019/08/04 17:34:38 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_read_format(char *format, t_flag *f, va_list arg)
{
	f->index = 0;
	f->len = 0;
	f->i = 0;
	while (format[f->i])
	{
		if (format[f->i] == '%')
		{
			ft_buffer_str(f, format, f->i);
			format += f->i + 1;
			ft_reset_flag(f);
			ft_read_flag(&format, f, arg);
			ft_get_variable(*format, f, arg);
			if (*format)
				format++;
		}
		else if (format[f->i] == '[')
			ft_get_color(f, &format, arg);
		else
			f->i++;
	}
	if (f->i != 0)
		ft_buffer_str(f, format, f->i);
	if (f->index)
		write(1, f->buffer, f->index);
	return (f->len + f->index);
}

void	ft_buffer_str(t_flag *f, char *str, int_fast32_t len)
{
	int_fast32_t	i;

	if (str)
	{
		i = 0;
		while (str[i] && i < len)
		{
			if (f->index == PRINTF_BUFF_SIZE)
			{
				write(1, f->buffer, PRINTF_BUFF_SIZE);
				f->len += PRINTF_BUFF_SIZE;
				f->index = 0;
			}
			f->buffer[f->index++] = str[i++];
		}
	}
}

void	ft_buffer_char(t_flag *f, int32_t c, int_fast32_t len)
{
	while (len > 0)
	{
		if (f->index == PRINTF_BUFF_SIZE)
		{
			write(1, f->buffer, PRINTF_BUFF_SIZE);
			f->len += PRINTF_BUFF_SIZE;
			f->index = 0;
		}
		f->buffer[f->index++] = c;
		len--;
	}
}

void	ft_get_variable(int_fast8_t type, t_flag *f, va_list arg)
{
	char	*str;
	ssize_t	nb;

	if (type == 'd' || type == 'i')
	{
		nb = ft_get_va_int(arg, f->mod, f->z);
		str = ft_itoa_no_symbol(nb);
		ft_put_d(f, nb, str, ft_strlen(str));
	}
	else if (type == 's')
		ft_put_s(f, va_arg(arg, char*));
	else if (type == 'f')
		ft_put_f(f, arg);
	else if (type == '%')
		ft_put_percent(f);
	else if (type == 'c')
		ft_put_c(f, va_arg(arg, int32_t));
	else if (ft_ischarset(type, "buoxX"))
		ft_get_unsigned(type, f, ft_get_va_uint(arg, f->mod, f->z));
	else if (type == 'p')
		ft_put_p(f, ft_get_va_uint(arg, 64, f->z));
}

void	ft_get_unsigned(int_fast8_t type, t_flag *f, size_t unb)
{
	if (type == 'u')
		ft_put_u(f, unb, ft_utoa_base(unb, "0123456789"));
	else if (type == 'b')
		ft_put_b(f, unb, ft_utoa_base(unb, "01"));
	else if (type == 'o')
		ft_put_o(f, unb, ft_utoa_base(unb, "01234567"));
	else if (type == 'x')
		ft_put_x(f, unb, ft_utoa_base(unb, "0123456789abcdef"));
	else if (type == 'X')
		ft_put_xx(f, unb, ft_utoa_base(unb, "0123456789ABCDEF"));
}
