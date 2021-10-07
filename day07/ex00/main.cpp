/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 02:03:19 by ayghazal          #+#    #+#             */
/*   Updated: 2021/10/07 02:30:17 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    int a = 42;
    int b = 1337;

    std::string     c = "Hello";
    std::string     d = "World";

    std::cout << "a = " << a << " | " << "b = " << b <<std::endl;
    ::swap(a, b);
    std::cout << "a = " << a << " | " << "b = " << b <<std::endl;
    std::cout << "c = " << c << " | " << "d = " << d <<std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << " | " << "d = " << d <<std::endl;


    a = 42;
    b = 1337;
    c = "Hello";
    d = "World";
    std::cout <<"MIN:(a, b) = " << ::min(a,b) <<std::endl;
    std::cout <<"MAX:(a, b) = " << ::max(a,b) <<std::endl;
    std::cout <<"MIN:(c, d) = " << ::min(c,d) <<std::endl;
    std::cout <<"MAX:(c, d) = " << ::max(c,d) <<std::endl;
    return(0);
}