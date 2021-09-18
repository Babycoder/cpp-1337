/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:36:29 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/18 13:42:46 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animals.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string str):type(str){
    std::cout << "WrongAnimal type = " << type << " Constructor called" << std::endl;  
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    
    *this = src;
    return;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

void    WrongAnimal::setType(std::string str)
{
    type = str;
}

std::string    WrongAnimal::getType(void) const
{
    return type;
}

WrongAnimal  &WrongAnimal::operator=(WrongAnimal const & rhs)
{
    setType(rhs.type);
    return(*this);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "";
}