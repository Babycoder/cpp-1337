/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 23:20:35 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/18 22:18:38 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animals.hpp"

Cat::Cat(): Animal("Cat"), _brain(new Brain())
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & src): Animal(src), _brain(new Brain())
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    *_brain = *(src._brain);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete _brain;
}

Cat &   Cat::operator=(Cat const & rhs)
{
    Animal::operator=(rhs);
    *_brain = *(rhs._brain);
    return *this;
}

void            Cat::makeSound(void) const
{
    std::cout << "Meeoooow" << std::endl;
}


Brain   *   Cat::getBrain(void) const
{
    return _brain;
}