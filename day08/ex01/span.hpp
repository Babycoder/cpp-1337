/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:19:09 by ayghazal          #+#    #+#             */
/*   Updated: 2021/10/10 03:05:50 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
#include <array>

class Span
{
	private:
		std::vector<int>		_vector;
		unsigned int			_size;
	public:
		Span();
		Span(unsigned int N);
		Span(Span const & src);
		virtual ~Span();

		Span	&	operator=(Span const & rhs);

		std::vector<int>	&	getVector(void);

		void					addNumber(int nb);
        int                     longestSpan(void);
        int                     shortestSpan(void);
        
		class limitException : public std::exception
		{
			public:
				virtual const char    *what() const throw(){return("Limit reached");};
		};
};

std::ostream	&		operator<<(std::ostream & o, Span & rhs);

#endif