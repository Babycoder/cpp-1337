/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 14:04:10 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/28 11:18:53 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return;
}

Fixed::~Fixed(void){
    std::cout << "Default constructor called" << std::endl;
}

int     Fixed::getRawBits(void) const
{
    return this->_n;
}

void    Fixed::setRawBits(int const raw)
{
    this->_n = raw;
}

Fixed  & Fixed::operator=(Fixed const & rhs){
    std::cout << "Assignation operator called" << std::endl;
    this->_n = rhs.getRawBits();

    return *this;    
}