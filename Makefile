# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/21 14:14:01 by lmartin           #+#    #+#              #
#    Updated: 2019/10/26 17:32:14 by lmartin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR_HEADERS = ./

DIR_SRCS = ./

DIR_LIBFT = ./libft/

LIBFT = libft.a

NAME = libftprintf.a

SRC	= ft_printf.c

OUT = ft_printf.out

MAIN = main.c

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJ)
				make -C $(DIR_LIBFT)
				cp $(DIR_LIBFT)$(LIBFT) ./$(NAME)
				ar rc $(NAME) $(OBJ)
				/bin/rm -f $(LIBFT)
				ranlib $(NAME)

%.o: %.c
				gcc $(FLAG) -c $< -o $@

test:			fclean $(NAME)
				gcc -o $(OUT) $(MAIN) $(NAME)

norme:
				norminette $(DIR_LIBFT)
				norminette $(DIR_SRCS)
				norminette $(DIR_HEADERS)

clean:
				/bin/rm -f $(OBJ)
				make clean -C ./libft/

fclean:			clean
				/bin/rm -f $(OUT)
				/bin/rm -f $(NAME)
				make fclean -C ./libft/

re:				fclean all

.PHONY:			re fclean clean test all norme
