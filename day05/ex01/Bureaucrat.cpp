/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:03:26 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/21 11:53:51 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void)
{
    std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade){
    std::cout << "Bureaucrat <" << name << "> Constructor called" << std::endl;
    if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
    else
    {
        _name = name;
        _grade = grade;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
    std::cout << "Bureaucrat Copy contructor called" << std::endl;
    _name = src._name;
    _grade = src._grade;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat <"<< _name << "> Destructor called" << std::endl;
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
    if (_grade - 1< 1)
		throw Bureaucrat::GradeTooHighException();
	_grade -= 1;
	return ;
}

void			Bureaucrat::decrementGrade(void)
{
    if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooHighException();
	_grade += 1;
	return ;
}



std::ostream	&	operator<<(std::ostream & o, Bureaucrat const & bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return o;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
	return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return ;
}

const char    *		Bureaucrat::GradeTooHighException::what() const throw()
{
	return("*BUREAUCRAT* Grade too high");
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
	return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return ;
}

const char    *		Bureaucrat::GradeTooLowException::what() const throw()
{
	return("*BUREAUCRAT* Grade too low");
}