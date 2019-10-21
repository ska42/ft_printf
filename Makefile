# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/21 14:14:01 by lmartin           #+#    #+#              #
#    Updated: 2019/10/22 00:42:18 by ska              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft.a

NAME = libft_printf.a

SRC	= ft_printf.c

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(LIBFT) $(OBJ)
				ar rc $(NAME) $(LIBFT) $(OBJ)
				ranlib $(NAME)

$(LIBFT):
				make -C ./libft/
				cp ./libft/libft.a ./libft.a
				make fclean -C ./libft/

%.o: %.c
				gcc $(FLAG) -c $< -o $@

test:			all
				gcc $(FLAG) main.c $(NAME)

clean:
				/bin/rm -f $(OBJ)

fclean:			clean
				/bin/rm -f $(NAME)
				/bin/rm -f $(LIBFT)

re:				fclean all
