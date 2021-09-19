# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/17 19:11:05 by ayghazal          #+#    #+#              #
#    Updated: 2021/09/19 09:19:53 by ayghazal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=*.cpp

FLAGS=-Wall -Wextra -Werror -std=c++98

NAME=a.out

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean