/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:03:35 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/23 23:14:25 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int     main()
{
    Bureaucrat b1("B1", 3);
    Form form("Loan", false, 100, 100);
    ShrubberyCreationForm f1("house");
    RobotomyRequestForm f2("chienpolice");
    
    try
    {
        f2.execute(b1);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    try
    {
        f2.beSigned(b1);
        f2.execute(b1);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
    
 //   f1.beSigned(b1);
    return 0;
}