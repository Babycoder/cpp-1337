/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:49:54 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/01 13:04:04 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int     main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "the adress in memory of the string : " << &str << std::endl;
    std::cout << "the adress in memory of the string using stringPTR : " << stringPTR << std::endl;
    std::cout << "the adress in memory of the string using stringREF : " << &stringREF << std::endl;

    std::cout << "\n***********************************************************\n\n";

    std::cout << "Displaying the string using stringPTR : " << *stringPTR << std::endl;
    std::cout << "Displaying the string using stringREF : " << stringREF << std::endl;
}