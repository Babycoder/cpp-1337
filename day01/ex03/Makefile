# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/02 12:36:36 by ayghazal          #+#    #+#              #
#    Updated: 2021/07/02 12:38:00 by ayghazal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

FLAGS=-Wall -Wextra -Werror -std=c++98

NAME=violance

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean