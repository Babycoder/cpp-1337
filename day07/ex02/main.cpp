/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:29:12 by ayghazal          #+#    #+#             */
/*   Updated: 2021/10/07 16:55:30 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int     main()
{
    Array<int>				A;
	Array<int>				B(4);
	Array<std::string>		C(4);

	for (int i = 0; i < B.size(); i++)
		B[i] = i;
	for (int i = 0; i < B.size(); i++)
		std::cout << B[i] << " ";
	std::cout << std::endl;
	B[1] = 1337;
	for (int i = 0; i < B.size(); i++)
		std::cout << B[i] << " ";
	std::cout << std::endl;
	C[0] = "Hello";
	C[1] = "BobiiiZ";
	C[2] = "BobiiiiiiiiZ";
	C[3] = "BooBiiiiiiiiiiiiiiiiZ";
	for (int i = 0; i < C.size(); i++)
		std::cout << C[i] << " ";
	std::cout << std::endl;

    return 0;
}