/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:03:35 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/24 18:03:35 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int     main()
{
    Bureaucrat bureaucrat1("bureaucrat1", 150);
    Bureaucrat bureaucrat2("bureaucrat2", 10);

    Intern RandomIntern;

    Form* ShrubberyForm;
    Form* RobotomyRequestForm;
    Form* PresidentialPardonForm;


    ShrubberyForm = RandomIntern.makeForm("shrubbery creation", "Loan");
    RobotomyRequestForm = RandomIntern.makeForm("robotomy request", "Robot");
    PresidentialPardonForm = RandomIntern.makeForm("Presidential pardon", "President");

    try
    {
        ShrubberyForm->beSigned(bureaucrat2);
        ShrubberyForm->execute(bureaucrat2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}