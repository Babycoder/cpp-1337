/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:47:27 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/29 17:34:05 by ayghazal         ###   ########.fr       */
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