/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:56:56 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/30 17:36:13 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
    std::cout << "Intern Default constructor called !!" << std::endl;
    return ;
}

Intern::Intern(const Intern &src)
{
    std::cout << "Intern Copy Constructor called !!" << std::endl;
    *this = src;
    return ;
}

Intern::~Intern(void)
{
    std::cout << "Intern Default Destructor called !!" << std::endl;
    return ;
}

Intern  & Intern::operator= (const Intern &rhs)
{
    if (this == &rhs)
        return(*this);
    return (*this);
}


Form *   Intern::makeForm(std::string name, std::string target)
{
    int i = 0;
    
    try
    {
        while (i < 3)
        {
            if (_forms[i] == name)
            {
                std::cout << "Intern creates " << name << std::endl;
            return (this->*_functionPointers[i])(target);
            }
            i++;
        }
        throw FormNotFoundException();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
        return NULL;
    }
}
 
Form*   Intern::_newPresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form*   Intern::_newRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form*   Intern::_newShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}


std::string Intern::_forms[3]={
    "robotomy request",
    "presidential pardon",
    "shrubbery creation",
};

Intern::FunctionPointer Intern::_functionPointers[3] = {
    &Intern::_newRobotomyRequestForm,
    &Intern::_newPresidentialPardonForm,
    &Intern::_newShrubberyCreationForm,
};


Intern::FormNotFoundException::FormNotFoundException(void)
{
	return ;
}

Intern::FormNotFoundException::~FormNotFoundException(void) throw()
{
	return ;
}

const char    *		Intern::FormNotFoundException::what() const throw()
{
	return("<INTERN> Form not found !!!");
}