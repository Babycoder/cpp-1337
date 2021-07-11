# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/29 16:49:46 by ayghazal          #+#    #+#              #
#    Updated: 2021/07/01 13:04:57 by ayghazal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=main.cpp

FLAGS=-Wall -Wextra -Werror -std=c++98

NAME=brain

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean