# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/21 14:14:01 by lmartin           #+#    #+#              #
#    Updated: 2019/10/21 22:52:04 by ska              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft.a

NAME = libft_printf.a

SRC	= ft_printf.c

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror

all:			$(LIBFT) $(OBJ)
				ar rc $(NAME) $(LIBFT) $(OBJ)
				ranlib $(NAME)

$(LIBFT):
				make -C ./libft/
				cp ./libft/libft.a ./libft.a
				make fclean -C ./libft/

%.o: %.c
				gcc $(FLAG) -c $< -o $@

test:			all
				clang $(FLAG) -o ft_printf.out main.c $(NAME)

clean:
				/bin/rm -f $(OBJ)

fclean:			clean
				/bin/rm -f $(NAME)
				/bin/rm -f $(LIBFT)

re:				fclean all
