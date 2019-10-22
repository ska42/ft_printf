# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/21 14:14:01 by lmartin           #+#    #+#              #
#    Updated: 2019/10/22 02:22:12 by ska              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#*************************** BEAUTIFUL MAKEFILE ****************************** #

# This is a minimal set of ANSI/VT100 color codes
_END = \x1b[0m
_BOLD = \x1b[1m
_UNDER = \x1b[4m
_REV = \x1b[7m

# Colors
_GREY = \x1b[30m
_RED = \x1b[31m
_GREEN = \x1b[32m
_YELLOW = \x1b[33m
_BLUE = \x1b[34m
_PURPLE = \x1b[35m
_CYAN = \x1b[36m
_WHITE = \x1b[37m

# Inverted, i.e. colored backgrounds
_IGREY = \x1b[40m
_IRED = \x1b[41m
_IGREEN = \x1b[42m
_IYELLOW = \x1b[43m
_IBLUE = \x1b[44m
_IPURPLE = \x1b[45m
_ICYAN = \x1b[46m
_IWHITE = \x1b[47m

_CEND = \x1b[0m

# **************************************************************************** #

DIR_HEADERS = ./

DIR_SRCS = ./

DIR_LIBFT = ./libft/

LIBFT = libft.a

NAME = libft_printf.a

SRC	= ft_printf.c

OUT = ft_printf.out

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJ)
				@echo "$(_CYAN)=============== Making $(LIBFT) ==============="
				@make -C $(DIR_LIBFT)
				cp $(DIR_LIBFT)$(LIBFT) ./$(NAME)
				ar rc $(NAME) $(OBJ)
				/bin/rm -f $(LIBFT)
				ranlib $(NAME)

%.o: %.c
				@echo "$(_GREEN)[OK]$(_CEND)	$(_YELLOW)Compiling:$(_CEND)" $<
				@gcc $(FLAG) -c $< -o $@

test:			$(NAME) $(OUT)

norme:
				norminette $(DIR_LIBFT)
				norminette $(DIR_SRCS)
				norminette $(DIR_HEADERS)

$(OUT):
				@echo "$(_PURPLE)Creating $(OUT) $(_CEND)"
				gcc $(FLAG) -o $(OUT) main.c $(NAME)

clean:
				/bin/rm -f $(OBJ)
				make clean -C ./libft/

fclean:			clean
				/bin/rm -f $(OUT)
				/bin/rm -f $(NAME)
				make fclean -C ./libft/

re:				fclean all

.PHONY:			re fclean clean test all norme
