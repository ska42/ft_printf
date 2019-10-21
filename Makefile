# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/21 14:14:01 by lmartin           #+#    #+#              #
#    Updated: 2019/10/21 16:16:28 by lmartin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft_printf.a

SRC	= ft_printf.c

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror

all:			libft $(OBJ)
				ar rc $(NAME) $(OBJ)
				ranlib $(NAME)

libft:
				make -C ./libft/
				cp ./libft/libft.a ./libft.a

%.o: %.c
				gcc $(FLAG) -c $< -o $@ -L. -lft

test:			all
				gcc $(FLAG) -o ft_printf.out main.c -L. -lft_printf

clean:
				/bin/rm -f $(OBJ)

fclean:			clean
				/bin/rm -f $(NAME)

re:				fclean all
