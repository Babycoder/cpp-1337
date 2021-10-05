/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:38:58 by ayghazal          #+#    #+#             */
/*   Updated: 2021/10/05 13:06:38 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

Convertor::Convertor(): _toConvert("")
{
}

Convertor::Convertor(Convertor const & src): _toConvert(src._toConvert), _double(src._double)
{
}

Convertor::Convertor(const char * toConvert): _toConvert(toConvert)
{
	if (strlen(_toConvert) == 1 && !isdigit(_toConvert[0]))
		_double = static_cast<double>(_toConvert[0]);
	else
	{
		_double = std::atof(_toConvert);
	}
	
}

Convertor::~Convertor()
{

}

Convertor	&	Convertor::operator=(Convertor const & rhs)
{

	_toConvert = rhs._toConvert;
	_double = rhs._double;
	return *this;
}

float				Convertor::toFloat(void)
{
	if (!std::isinf(_double) && !std::isnan(_double) && strlen(_toConvert) != 1 && !is_only_digit(_toConvert))
		throw ImpossibleException();
	return static_cast<float>(_double);
}

double				Convertor::toDouble(void)
{
	if (!std::isinf(_double) && !std::isnan(_double) && strlen(_toConvert) != 1 && !is_only_digit(_toConvert))
		throw ImpossibleException();
	return (_double);
}

int				Convertor::toInt(void)
{
	if(static_cast<long long>(_double) > std::numeric_limits<int>::max() || static_cast<long long>(_double) < std::numeric_limits<int>::min())
		throw ImpossibleException();
	if (!std::isinf(_double) && !std::isnan(_double) && strlen(_toConvert) != 1 && !is_only_digit(_toConvert))
		throw ImpossibleException();
	if(isinf(_double) || std::isnan(_double))
		throw ImpossibleException();
	return static_cast<int>(_double);
}

char				Convertor::toChar(void)
{
	if(static_cast<long long>(_double) > std::numeric_limits<char>::max() || static_cast<long long>(_double) < std::numeric_limits<char>::min())
		throw ImpossibleException();
	if (!std::isnan(_double) && !std::isinf(_double) && strlen(_toConvert) != 1 && !is_only_digit(_toConvert))
		throw ImpossibleException();
	if(isinf(_double) || std::isnan(_double))
		throw ImpossibleException();
	if (!isprint(static_cast<int>(_double)))
		throw NonDisplayableException();
	
	return static_cast<char>(_double);
}

void				Convertor::convert(void)
{
	try
	{
		char tmp = toChar();
		std::cout << "char : '" << tmp << "'" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout  << "char : " << e.what() << std::endl;
	}
	try
	{
		int tmp = toInt();
		std::cout << "int : " << tmp << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout  << "int : " << e.what() << std::endl;
	}
	try
	{
		float tmp = toFloat();
		std::cout.precision(1);
		std::cout << "float : " << std::fixed << tmp << "f" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout  << "float : " << e.what() << std::endl;
	}
	try
	{
		double tmp = toDouble();
		std::cout.precision(1);
		std::cout << "double : " << std::fixed << tmp << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout  << "double : " << e.what() << std::endl;
	}
}



Convertor::NonDisplayableException::NonDisplayableException(void)
{
	return ;
}

Convertor::NonDisplayableException::~NonDisplayableException(void) throw()
{
	return ;
}

const char    *		Convertor::NonDisplayableException::what() const throw()
{
	return("Non displayable");
}

Convertor::ImpossibleException::ImpossibleException(void)
{
	return ;
}

Convertor::ImpossibleException::~ImpossibleException(void) throw()
{
	return ;
}

const char    *		Convertor::ImpossibleException::what() const throw()
{
	return("impossible");
}

bool Convertor::is_only_digit(std::string const &str)
{
    for (int i = 0; str[i]; i++)
        if (!isdigit(str[i]) && str[i] != '.' && str[i] != '-' && str[i] != 'f')
            return false;
    return true;
}