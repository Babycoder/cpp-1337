/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:02:14 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/23 23:15:37 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", false, 72, 45), _target("")
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src): Form(src), _target(src._target)
{

}


RobotomyRequestForm::RobotomyRequestForm(std::string target) :Form("RobotomyRequestForm", false, 72, 45), _target(target)
{
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm	&	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	_target = rhs._target;
	return *this;
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    srand (time(NULL));
    if (rand() % 2)
    {
        std::cout << "BOBIIIIIIIIIZ..." << _target \
                  << " has been robotomized successfully !" << std::endl;
    }
    else
    {
        std::cout << "The " << _target << " robotomization failed !" \
                  << std::endl;
    }
    return ;
}