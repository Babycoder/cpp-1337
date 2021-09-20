/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:03:26 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/20 16:43:34 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void)
{
    std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
    std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
    std::cout << "Bureaucrat Copy contructor called" << std::endl;
    _name = src._name;
    _grade = src._grade;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
    _name = rhs._name;
    _grade = rhs._grade;
    return *this;
}

std::string     Bureaucrat::getName(void)const
{
    return _name;
}

int             Bureaucrat::getGrade(void)const
{
    return _grade;
}

void			Bureaucrat::incrementGrade(void)
{
	_grade -= 1;
	return ;
}

void			Bureaucrat::decrementGrade(void)
{
	_grade += 1;
	return ;
}



/*std::ostream	&	operator<<(std::ostream & o, Bureaucrat const & bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return o;
}*/