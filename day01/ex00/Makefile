# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/29 10:58:44 by ayghazal          #+#    #+#              #
#    Updated: 2021/07/06 10:50:44 by ayghazal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

FLAGS=-Wall -Wextra -Werror -std=c++98

NAME=zombie

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean