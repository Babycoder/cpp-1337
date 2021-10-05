# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/02 15:45:30 by ayghazal          #+#    #+#              #
#    Updated: 2021/10/05 13:02:45 by ayghazal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=  *.cpp

FLAGS=-Wall -Wextra -Werror -std=c++98

NAME=convert

$(NAME):
	g++ $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean