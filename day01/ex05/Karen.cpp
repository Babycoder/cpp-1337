/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:49:35 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/05 16:53:26 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
    return;
}

Karen::~Karen()
{
    return;
}

void    Karen::debug(void)
{
    std::cout << "I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info(void)
{
    std::cout << "I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void    Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::complain(std::string level)
{
    int i = -1;
    if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
    {
        std::cout << "Karen Comment ERROR!!" << std::endl;
        return ;
    }
    std::string comment[4];
    comment[0] = "DEBUG";
    comment[1] = "INFO";
    comment[2] = "WARNING";
    comment[3] = "ERROR";
    
    void    (Karen::*f[4])(void);
    f[0]= &Karen::debug;
    f[1]= &Karen::info;
    f[2]= &Karen::warning;
    f[3]= &Karen::error;
    
    while (++i < 4)
    {
        if (comment[i] == level)
            (this->*f[i])();
    }
}