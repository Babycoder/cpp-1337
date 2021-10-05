# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 14:55:51 by ayghazal          #+#    #+#              #
#    Updated: 2021/10/05 20:15:15 by ayghazal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=  main.cpp

FLAGS=-Wall -Wextra -Werror

NAME=a.out

$(NAME):
	g++ $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean