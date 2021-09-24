# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/20 15:02:53 by ayghazal          #+#    #+#              #
#    Updated: 2021/09/24 18:04:33 by ayghazal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC= Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp \
	RobotomyRequestForm.cpp  ShrubberyCreationForm.cpp  main.cpp

FLAGS=-Wall -Wextra -Werror -std=c++98

NAME=a.out

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean:
	rm -rf $(NAME)

fclean: clean