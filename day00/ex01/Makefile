# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/06 20:33:26 by ayghazal          #+#    #+#              #
#    Updated: 2021/06/06 20:33:35 by ayghazal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=epbook.cpp

FLAGS=-Wall -Wextra -Werror

NAME=epbook

$(NAME):
	g++ $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean