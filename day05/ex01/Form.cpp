/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:02:25 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/21 17:13:36 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name(""), _gradeToExecute(1), _gradeToSign(1), _signed(false)
{
    std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string name, bool isSigned, unsigned int gradeToSign, unsigned int gradeToExecute):
_name(name), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign), _signed(isSigned)
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

Form::Form(Form const & src): _name(src._name), _gradeToExecute(src._gradeToExecute), _gradeToSign(src._gradeToSign), _signed(src._signed)
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