/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 12:23:12 by ayghazal          #+#    #+#             */
/*   Updated: 2021/08/06 14:55:57 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int _n;
        static const int _frac = 8;
    public:

    Fixed(void);
    Fixed(Fixed const & src);
    Fixed(int const integer);
    Fixed(float const floating);
    
    ~Fixed(void);
    Fixed & operator=(Fixed const & rhs);
    int getRawBits(void) const;
    void    setRawBits(int const raw);
    float 	toFloat( void ) const;
    int 	toInt( void ) const;

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif