/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:03:35 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/21 11:50:07 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int     main()
{
    Bureaucrat Kratos("Kratos", 150);
    Bureaucrat Zeus("Zeus", 1);

    try
    {
        Kratos.decrementGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Zeus.incrementGrade();
    }
    catch (std::exception & e)
    { Bureaucrat Kratos("Kratos", 150);
    Bureaucrat Zeus("Zeus", 1);

    try
    {
        Kratos.decrementGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Zeus.incrementGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << Kratos << std::endl;
    Kratos.incrementGrade();
    std::cout << Kratos << std::endl;
    return 0;
        std::cout << e.what() << std::endl;
    }
    std::cout << Kratos << std::endl;
    Kratos.incrementGrade();
    std::cout << Kratos << std::endl;
    return 0;
}