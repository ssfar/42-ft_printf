# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 12:15:55 by ssfar             #+#    #+#              #
#    Updated: 2019/08/05 17:01:49 by ssfar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC_LIBFT = ft_atoi.c ft_intlen_no_symbol.c ft_islower.c ft_lstdelone.c ft_memdel.c \
  ft_putstr.c ft_strcasecmp.c ft_strdup.c ft_strmap.c ft_strnstr.c \
  ft_tolower.c ft_bzero.c ft_isalnum.c ft_isprint.c ft_lstiter.c ft_memmove.c \
  ft_putstr_fd.c ft_strcasestr.c ft_strequ.c ft_strmapi.c ft_strrchr.c \
  ft_toupper.c ft_casecmp.c ft_isalpha.c ft_isspace.c ft_lstmap.c ft_memset.c \
  ft_str_is_alpha.c ft_strcat.c ft_striter.c ft_strn_is_charset.c ft_strrev.c \
  ft_utoa_base.c ft_count_char_occur.c ft_isascii.c ft_isupper.c ft_lstnew.c \
  ft_putchar.c ft_str_is_charset.c ft_strchr.c ft_striteri.c ft_strncat.c \
  ft_strsplit.c ft_count_word.c ft_isblank.c ft_isxdigit.c \
  ft_memalloc.c ft_putchar_fd.c ft_str_is_lowercase.c ft_strchr_len.c \
  ft_strjoin.c ft_strncmp.c ft_strstr.c ft_free_strtab.c ft_ischarset.c \
  ft_itoa.c ft_memccpy.c ft_putendl.c ft_str_is_numeric.c ft_strclr.c \
  ft_strlcat.c ft_strncpy.c ft_strsub.c ft_get_va_int.c ft_iscntrl.c \
  ft_itoa_no_symbol.c ft_memchr.c ft_putendl_fd.c ft_str_is_printable.c \
  ft_strcmp.c ft_strlcpy.c ft_strndup.c ft_strtrim.c ft_get_va_uint.c \
  ft_isdigit.c ft_lstadd.c ft_memcmp.c ft_putnbr.c ft_str_is_uppercase.c \
  ft_strcpy.c ft_strlen.c ft_strnequ.c ft_strupcase.c ft_intlen.c ft_isgraph.c \
  ft_lstdel.c ft_memcpy.c ft_putnbr_fd.c ft_strcapitalize.c ft_strdel.c \
  ft_strlowcase.c ft_strnew.c ft_swap.c ft_repeat_chardup.c \
  ft_strjoin_free.c ft_utoa.c ft_uintlen.c ft_upower.c ft_round_float.c \
  ft_get_float_mantissa.c ft_aproximative_ftoa_no_symbol.c \

SRC_PRINTF = parsing.c flags.c type_duf.c type_percent_cs.c type_boxpxx.c colors.c rgb.c \
  ft_printf.c \

SRC_PRINTF_PATH = printf/sources/

SRC_GNL = get_next_line.c \

SRC_GNL_PATH = get_next_line/sources/

SRC = $(SRC_LIBFT) $(addprefix $(SRC_PRINTF_PATH), $(SRC_PRINTF)) $(addprefix $(SRC_GNL_PATH), $(SRC_GNL))

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $@ $^
	@ranlib $@

clean:
	@rm -f $(OBJ)
fclean: clean
	@rm -f $(NAME)

re: fclean all
