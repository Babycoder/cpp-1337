/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 14:04:11 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/28 11:03:55 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
    private:
        int _n;
        static const int _frac = 8;
    public:

    Fixed(void);
    Fixed(Fixed const & src);
    ~Fixed(void);
    Fixed & operator=(Fixed const & rhs);
    int getRawBits(void) const;
    void    setRawBits(int const raw);

};

#endif