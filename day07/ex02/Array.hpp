/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:29:14 by ayghazal          #+#    #+#             */
/*   Updated: 2021/10/07 16:47:19 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class Array {
    private :
    
        T                *_array;
        unsigned int        _len;
    
    public :
        
        Array()
        {
            _array = NULL;
            _len = 0;   
        };
        
        Array(unsigned int n)
        {
          _array = new T[n];
          _len = n;  
        };
        
        Array(Array const & src)
		{
			_array = new T[src._len];
			for (unsigned int i = 0; i < src._len; i++)
				_array[i] = src._array[i];
			_len = src._len;
		};
        
        virtual ~Array()
		{
			delete [] _array;
		};
        
        Array	&	operator=(Array const & rhs)
		{
			if (_array)
				delete [] _array;
			_array = new T[rhs._len];
			for (unsigned int i = 0; i < rhs._len; i++)
				_array[i] = rhs._array[i];
			_len = rhs._len;
			return *this;
        };
        
        T   &   operator[](int index)
		{
			if (index >= static_cast<int>(_len) || index < 0) 
			{
				throw OutOfLimits();
			}
			return _array[index];
		};
        
        int size(void)
		{
			return (_len);
		};
        
        class OutOfLimits : public std::exception
		{
			public:
				OutOfLimits(void){return ;};
				virtual ~OutOfLimits(void) throw(){return ;};
				virtual const char    *what() const throw(){return("Index out of Limit !!");};
		};
};

#endif