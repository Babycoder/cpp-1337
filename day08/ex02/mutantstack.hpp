/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 03:43:39 by ayghazal          #+#    #+#             */
/*   Updated: 2021/10/11 03:37:53 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
#include <array>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
    private :

    public:
	    typedef typename std::deque<T>::iterator iterator;
    
	    MutantStack(void);
	    MutantStack(const MutantStack & src);
	    ~MutantStack(void);
    
	    MutantStack	&operator=(const MutantStack & src);
    
	    iterator	begin(void);
	    iterator	end(void);
};



#endif