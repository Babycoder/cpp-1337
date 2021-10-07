/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 01:44:49 by ayghazal          #+#    #+#             */
/*   Updated: 2021/10/06 02:48:57 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base * generate(void){
	
    Base* base;
	
    srand (time(NULL));
    int n = rand() % 3;

	if (n == 0)
		base = new A();
	if (n == 1)
		base = new B();
	if (n == 2)
		base = new C();
	return base;
}

void identify( Base * p ){
	
    A* baseA;
	B* baseB;
	C* baseC;

	baseA = dynamic_cast<A *>(p);
	baseB = dynamic_cast<B *>(p);
	baseC = dynamic_cast<C *>(p);
	if (baseA == NULL && baseB == NULL)
		std::cout << "C" << std::endl;
	if (baseA == NULL && baseC == NULL)
		std::cout << "B" << std::endl;
	if (baseB == NULL && baseC == NULL)
		std::cout << "A" << std::endl;
	return ;
}

void identify( Base & p ){
	A* baseA;
	B* baseB;
	C* baseC;

	baseA = dynamic_cast<A *>(&p);
	baseB = dynamic_cast<B *>(&p);
	baseC = dynamic_cast<C *>(&p);
	if (baseA == NULL && baseB == NULL)
		std::cout << "C" << std::endl;
	if (baseA == NULL && baseC == NULL)
		std::cout << "B" << std::endl;
	if (baseB == NULL && baseC == NULL)
		std::cout << "A" << std::endl;
	return ;
}

int     main()
{
    Base    *base = generate();
    identify(base);
    std::cout << std::endl << std::endl;
    identify(*base);
    delete base;
    return 0;
}