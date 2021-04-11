# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayghazal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/11 15:23:02 by ayghazal          #+#    #+#              #
#    Updated: 2021/04/11 15:23:07 by ayghazal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=megaphone.cpp

FLAGS=-Wall -Wextra -Werror

NAME=megaphone

$(NAME):
	g++ $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean
