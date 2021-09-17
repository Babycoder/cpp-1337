/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 19:13:33 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/17 23:39:48 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animals.hpp"

Animal::Animal(void)
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string str):type(str){
    std::cout << "Animal type = " << type << " Constructor called" << std::endl;  
}

Animal::Animal(Animal const & src)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    
    *this = src;
    return;
}

Animal::~Animal(void)
{
    std::cout << "Animal Destructor called" << std::endl;
}

void    Animal::setType(std::string str)
{
    type = str;
}

std::string    Animal::getType(void) const
{
    return type;
}

Animal  &Animal::operator=(Animal const & rhs)
{
    setType(rhs.type);
    return(*this);
}

void    Animal::makeSound(void) const
{
    std::cout << "";
}
