/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:03:35 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/22 14:46:21 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int     main()
{
    Form       loan("loan", false, 40, 40);
    Bureaucrat kratos("kratos", 150);
    Bureaucrat Zeus("Zeus", 1);

    std::cout << loan << std::endl;
    std::cout << Zeus << std::endl;
    std::cout << kratos << std::endl << std::endl << std::endl;

    try
    {
        kratos.signForm(loan);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << loan << std::endl;
    try
    {
        Zeus.signForm(loan);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << loan << std::endl;
    return 0;
}