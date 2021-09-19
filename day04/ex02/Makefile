# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/17 19:11:05 by ayghazal          #+#    #+#              #
#    Updated: 2021/09/19 10:37:26 by ayghazal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC= WrongAnimal.cpp WrongCat.cpp  animal.cpp brain.cpp cat.cpp dog.cpp  main.cpp

FLAGS=-Wall -Wextra -Werror -std=c++98

NAME=a.out

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean