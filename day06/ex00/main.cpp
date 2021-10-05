/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:36:36 by ayghazal          #+#    #+#             */
/*   Updated: 2021/10/05 13:01:48 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"


/*void    test(const char * _toConvert)
{
    long double _double;

    if (strlen(_toConvert) == 1 && !isdigit(_toConvert[0]))
		_double = static_cast<double>(_toConvert[0]);
	else
	{
		_double = std::atof(_toConvert);
	}
    std::cout << _double << std::endl;
}*/

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
      std::cout << "Wrong number of arguments" << std::endl;
      return 0;
    }
    Convertor	convertor(argv[1]);
    convertor.convert();
    return 0;
}