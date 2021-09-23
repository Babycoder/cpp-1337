/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:36:06 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/23 23:37:56 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", false, 25, 5), _target("")
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): Form(src), _target(src._target)
{

}


PresidentialPardonForm::PresidentialPardonForm(std::string target) :Form("PresidentialPardonForm",	false, 25, 5), _target(target)
{
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm	&	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	_target = rhs._target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::cout << _target << " has been pardoned by Zafod Beebkerox." << std::endl;
    return ;
}