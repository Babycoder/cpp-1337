/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 23:31:49 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/17 23:39:43 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animals.hpp"

Dog::Dog(): Animal("Dog")
{
     std::cout << "Dog constructor called" << std::endl;   
}

Dog::Dog(Dog const & src): Animal(src){}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

Dog &   Dog::operator=(Dog const & rhs)
{
    Animal::operator=(rhs);
    return *this;
}

void            Dog::makeSound(void) const
{
    std::cout << "Haw Haw bobiiiiiz" << std::endl;
}