# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/06 11:03:33 by ayghazal          #+#    #+#              #
#    Updated: 2021/07/06 11:03:58 by ayghazal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=main.cpp ZombieHorde.cpp Zombie.cpp

FLAGS=-Wall -Wextra -Werror -std=c++98

NAME=zombies

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean