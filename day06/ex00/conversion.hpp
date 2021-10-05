/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:38:56 by ayghazal          #+#    #+#             */
/*   Updated: 2021/10/05 12:03:07 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits>
#include <math.h> 

class Convertor
{
	private:
		const char *				_toConvert;
		long double					_double;
	public:
		Convertor();
		Convertor(Convertor const & src);
		Convertor(const char * toConvert);
		virtual ~Convertor();

		Convertor	&	operator=(Convertor const & rhs);

		int				toInt(void);
		char			toChar(void);
		float			toFloat(void);
		double			toDouble(void);
		void			convert(void);

		class NonDisplayableException : public std::exception
		{
			public:
				NonDisplayableException(void);
				virtual ~NonDisplayableException(void) throw();
				virtual const char    *what() const throw();
		};

		class ImpossibleException : public std::exception
		{
			public:
				ImpossibleException(void);
				virtual ~ImpossibleException(void) throw();
				virtual const char    *what() const throw();
		};
		static bool is_only_digit(std::string const &str);

};

#endif