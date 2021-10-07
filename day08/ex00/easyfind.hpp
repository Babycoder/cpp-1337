/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:55:01 by ayghazal          #+#    #+#             */
/*   Updated: 2021/10/07 23:14:28 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <iterator>
#include <array>
#include <algorithm>



class NotFound : public std::exception
{
    public:
        NotFound(void){return ;};
        virtual ~NotFound(void) throw(){return ;};
        virtual const char    *what() const throw(){return("Can't Found !!");};
};


template <typename T>
int    & easyfind(T & _container, int pos)
{
    typename T::iterator    itr;
    
    itr = std::find(_container.begin(), _container.end(), pos);
    if (itr != _container.end())
        return (*itr);
    else
        throw NotFound();
    
}


#endif