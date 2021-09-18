/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 23:31:49 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/18 22:17:07 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animals.hpp"

Dog::Dog(): Animal("Dog"), _brain(new Brain())
{
     std::cout << "Dog constructor called" << std::endl;   
}

Dog::Dog(Dog const & src): Animal(src), _brain(new Brain())
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *_brain = *(src._brain);    
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete _brain;
}

Dog &   Dog::operator=(Dog const & rhs)
{
    Animal::operator=(rhs);
    *_brain = *(rhs._brain);
    return *this;
}

void            Dog::makeSound(void) const
{
    std::cout << "Haw Haw bobiiiiiz" << std::endl;
}

Brain   *   Dog::getBrain(void) const
{
    return _brain;
}