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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int     main()
{
    Bureaucrat bureaucrat1("bureaucrat1", 150);
    Bureaucrat bureaucrat2("bureaucrat2", 1);

    ShrubberyCreationForm   house("house");
    RobotomyRequestForm     robot("robot");
    PresidentialPardonForm  president("president");

    std::cout << bureaucrat2 << std::endl;
    std::cout << bureaucrat1 << std::endl << std::endl << std::endl;

    bureaucrat1.signForm(house);
    bureaucrat1.executeForm(house);
    std::cout << house << std::endl;
    bureaucrat2.signForm(house);
    bureaucrat2.executeForm(house);
    std::cout << house << std::endl << std::endl;

    bureaucrat1.signForm(robot);
    bureaucrat1.executeForm(robot);
    std::cout << robot << std::endl;
    bureaucrat2.signForm(robot);
    bureaucrat2.executeForm(robot);
    std::cout << robot << std::endl << std::endl;

    bureaucrat1.signForm(president);
    bureaucrat1.executeForm(president);
    std::cout << president << std::endl;
    bureaucrat2.signForm(president);
    bureaucrat2.executeForm(president);
    std::cout << president << std::endl << std::endl;
    return 0;
}