# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/20 15:02:53 by ayghazal          #+#    #+#              #
#    Updated: 2021/09/30 12:57:55 by ayghazal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC= Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp  Intern.cpp \
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