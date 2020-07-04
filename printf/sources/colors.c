/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 16:13:24 by ssfar             #+#    #+#             */
/*   Updated: 2019/08/04 17:34:20 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_put_color(char *color, char **format, t_flag *f, uint_fast8_t len)
{
	ft_buffer_str(f, *format, f->i - 1);
	if (f->index)
	{
		write(1, f->buffer, f->index);
		f->len += f->index;
		f->index = 0;
	}
	write(1, color, ft_strlen(color));
	*format += f->i + len + 1;
	f->i = 0;
}

void	ft_compare_backgound_color(char **format, t_flag *f, char *color)
{
	if (!ft_strcmp(color, "b_black"))
		ft_put_color(B_BLACK, format, f, 7);
	else if (!ft_strcmp(color, "b_red"))
		ft_put_color(B_RED, format, f, 5);
	else if (!ft_strcmp(color, "b_green"))
		ft_put_color(B_GREEN, format, f, 7);
	else if (!ft_strcmp(color, "b_yellow"))
		ft_put_color(B_YELLOW, format, f, 8);
	else if (!ft_strcmp(color, "b_blue"))
		ft_put_color(B_BLUE, format, f, 6);
	else if (!ft_strcmp(color, "b_magenta"))
		ft_put_color(B_MAGENTA, format, f, 9);
	else if (!ft_strcmp(color, "b_cyan"))
		ft_put_color(B_CYAN, format, f, 6);
	else if (!ft_strcmp(color, "b_white"))
		ft_put_color(B_WHITE, format, f, 7);
}

void	ft_compare_color(char **format, t_flag *f, char *color)
{
	if (!ft_strcmp(color, "black"))
		ft_put_color(BLACK, format, f, 5);
	else if (!ft_strcmp(color, "red"))
		ft_put_color(RED, format, f, 3);
	else if (!ft_strcmp(color, "green"))
		ft_put_color(GREEN, format, f, 5);
	else if (!ft_strcmp(color, "yellow"))
		ft_put_color(YELLOW, format, f, 6);
	else if (!ft_strcmp(color, "blue"))
		ft_put_color(BLUE, format, f, 4);
	else if (!ft_strcmp(color, "magenta"))
		ft_put_color(MAGENTA, format, f, 7);
	else if (!ft_strcmp(color, "cyan"))
		ft_put_color(CYAN, format, f, 4);
	else if (!ft_strcmp(color, "white"))
		ft_put_color(WHITE, format, f, 5);
}

void	ft_compare_attribute(char **format, t_flag *f, char *color)
{
	if (!ft_strcmp(color, "a_reset"))
		ft_put_color(RESET, format, f, 7);
	else if (!ft_strcmp(color, "a_eoc"))
		ft_put_color(EOC, format, f, 5);
	else if (!ft_strcmp(color, "a_eob"))
		ft_put_color(EOB, format, f, 5);
	else if (!ft_strcmp(color, "a_bold"))
		ft_put_color(BOLD, format, f, 6);
	else if (!ft_strcmp(color, "a_faint"))
		ft_put_color(FAINT, format, f, 7);
	else if (!ft_strcmp(color, "a_italic"))
		ft_put_color(ITALIC, format, f, 8);
	else if (!ft_strcmp(color, "a_underlined"))
		ft_put_color(UNDERLINED, format, f, 12);
	else if (!ft_strcmp(color, "a_blink"))
		ft_put_color(BLINK, format, f, 7);
	else if (!ft_strcmp(color, "a_reverse"))
		ft_put_color(REVERSE, format, f, 9);
	else if (!ft_strcmp(color, "a_hidden"))
		ft_put_color(HIDDEN, format, f, 8);
}

void	ft_get_color(t_flag *f, char **format, va_list arg)
{
	uint_fast8_t	j;
	size_t			k;
	char			color[13];

	j = 0;
	f->i++;
	k = f->i;
	while (j < 12 && (*format)[k] && (*format)[k] != ']')
		color[j++] = (*format)[k++];
	if ((*format)[k] == ']')
	{
		color[j] = '\0';
		if (color[0] == 'b' && color[1] == '_')
			ft_compare_backgound_color(format, f, color);
		else if (color[0] == 'a' && color[1] == '_')
			ft_compare_attribute(format, f, color);
		else if ((color[0] >= '0' && color[0] <= '9')
			|| (color[0] == 'b' && color[1] >= '0' && color[1] <= '9'))
			ft_get_rgb(format, f, color);
		else if ((color[0] == '*' && color[1] == '\0')
			|| (color[0] == 'b' && color[1] == '*' && color[2] == '\0'))
			ft_get_rgb_wildcard(format, f, arg, color);
		else
			ft_compare_color(format, f, color);
	}
}
