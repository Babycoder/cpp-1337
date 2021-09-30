/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:02:25 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/23 22:38:14 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name(""), _signed(false),_gradeToSign(1), _gradeToExecute(1)
{
    std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string name, bool isSigned, unsigned int gradeToSign, unsigned int gradeToExecute):
_name(name), _signed(isSigned), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else
    {
        std::cout << "The Form <" << name <<"> Constructor Called" << std::endl;
		return ;
    }
}

Form::Form(Form const & src): _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
    std::cout << "Form Copy Constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Form Default Destructor Called" << std::endl;
}

Form	&	Form::operator=(Form const & rhs)
{
	_signed = rhs._signed;
	return *this;
}

bool    Form::getSigned(void) const
{
    return (_signed);
}

int     Form::getGradeToSign(void) const
{
    return (_gradeToSign);
}

int             Form::getGradeToExecute(void) const
{
    return (_gradeToExecute);
}

std::string     Form::getName(void) const
{
    return (_name);
}

std::ostream    &operator<< (std::ostream &o, const Form &rhs)
{
    o << "The form: " << rhs.getName() << " which is" \
        << (rhs.getSigned() ? "" : " not ") \
        << " signed requires a grade " << rhs.getGradeToSign() \
        << " to sign, and " << rhs.getGradeToExecute() << " to be executed.";
    return (o);
}

void                      Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else
		_signed = true;
	return ;
}

void                      Form::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeToExecute)
		throw GradeTooLowException();
	else if (_signed == false)
		throw FormNotSignedException();
	return ;
}


Form::GradeTooHighException::GradeTooHighException(void)
{
	return ;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return ;
}

const char    *		Form::GradeTooHighException::what() const throw()
{
	return("<FORM> Grade too high !");
}

Form::GradeTooLowException::GradeTooLowException(void)
{
	return ;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return ;
}

const char    *		Form::GradeTooLowException::what() const throw()
{
	return("<FORM> Grade too low !");
}

Form::FormNotSignedException::FormNotSignedException(void)
{
	return ;
}

Form::FormNotSignedException::~FormNotSignedException(void) throw()
{
	return ;
}

const char    *		Form::FormNotSignedException::what() const throw()
{
	return("The Form is not signed !");
}