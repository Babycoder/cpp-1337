/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 12:23:14 by ayghazal          #+#    #+#             */
/*   Updated: 2021/08/06 14:55:43 by ayghazal         ###   ########.fr       */
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

Fixed::Fixed(int const integer)
{
	std::cout << "Int constructor called" << std::endl;
	_n = integer << _frac;
}

Fixed::Fixed(float const floating)
{
	std::cout << "Float constructor called" << std::endl;
    _n = roundf((floating) * (1 << _frac));
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_n;
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_n = raw;
}

Fixed  & Fixed::operator=(Fixed const & rhs){
    std::cout << "Assignation operator called" << std::endl;
    this->_n = rhs.getRawBits();

    return *this;    
}

float Fixed::toFloat( void ) const
{
	return (float(round(_n) / (1 << _frac)));
}

int Fixed::toInt( void ) const
{
	return (_n >> _frac);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}