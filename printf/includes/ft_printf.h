/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 16:05:05 by ssfar             #+#    #+#             */
/*   Updated: 2019/08/05 18:14:32 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define PRINTF_BUFF_SIZE 64
# include "../../libft.h"

typedef struct	s_flag
{
	char			buffer[PRINTF_BUFF_SIZE];
	size_t			i;
	uint_fast32_t	len;
	int32_t			width;
	int32_t			precision;
	uint_fast8_t	index;
	uint_fast8_t	minus;
	uint_fast8_t	plus;
	uint_fast8_t	sharp;
	uint_fast8_t	zero;
	uint_fast8_t	space;
	uint_fast8_t	dot;
	uint_fast8_t	mod;
	uint_fast8_t	l;
	uint_fast8_t	z;
}				t_flag;

int				ft_printf(const char *format, ...);
int				ft_read_format(char *format, t_flag *f, va_list arg);
void			ft_buffer_str(t_flag *f, char *str, int_fast32_t len);
void			ft_buffer_char(t_flag *f, int32_t c, int_fast32_t len);
void			ft_reset_flag(t_flag *f);
void			ft_read_flag(char **format, t_flag *f, va_list arg);
void			ft_get_width(char **format, va_list arg, int32_t *width,
	uint_fast8_t *minus);
void			ft_get_precision(char **format, va_list arg, int32_t *precision,
	uint_fast8_t *dot);
void			ft_modifier(char **format, uint_fast8_t *mod, uint_fast8_t *z);
void			ft_get_variable(int_fast8_t type, t_flag *f, va_list arg);
void			ft_get_unsigned(int_fast8_t type, t_flag *f, size_t unb);
void			ft_put_d(t_flag *f, ssize_t nb, char *str, int_fast32_t len);
void			ft_put_u(t_flag *f, size_t unb, char *str);
void			ft_put_f(t_flag *f, va_list arg);
void			ft_put_b(t_flag *f, size_t unb, char *str);
void			ft_put_o(t_flag *f, size_t unb, char *str);
void			ft_put_x(t_flag *f, size_t unb, char *str);
void			ft_put_xx(t_flag *f, size_t unb, char *str);
void			ft_put_p(t_flag *f, size_t unb);
void			ft_put_s(t_flag *f, char *str);
void			ft_put_c(t_flag *f, int32_t c);
void			ft_put_percent(t_flag *f);
void			ft_put_color(char *color, char **format, t_flag *f,
	uint_fast8_t len);
void			ft_compare_backgound_color(char **format, t_flag *f,
	char *color);
void			ft_compare_color(char **format, t_flag *f, char *color);
void			ft_compare_attribute(char **format, t_flag *f, char *color);
void			ft_get_rgb(char **format, t_flag *f, char *color);
void			ft_get_rgb_wildcard(char **format, t_flag *f, va_list arg,
	char *color);
void			ft_get_color(t_flag *f, char **format, va_list arg);
#endif
