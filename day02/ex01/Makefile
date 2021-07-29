# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/29 16:47:31 by ayghazal          #+#    #+#              #
#    Updated: 2021/07/29 16:47:46 by ayghazal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=main.cpp Fixed.cpp

FLAGS=-Wall -Wextra -Werror -std=c++98

NAME=a.out

$(NAME):
	g++ $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean