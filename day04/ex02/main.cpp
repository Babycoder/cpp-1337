/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 19:11:51 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/19 10:41:49 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animals.hpp"

int     main()
{
	const Animal* animals[10];
	for (int i = 0; i < 5; i++)
		animals[i] =  new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] =  new Cat();
	for (int i = 0; i < 10; i++)
		delete animals[i];

	std::cout << "DEEP COPY :" << std:: endl;
	Dog	a;
	Dog b;

	b = a;
	std::cout << "ADDRESS OF A BRAIN :" << (a.getBrain()) << std:: endl;
	std::cout << "ADDRESS OF B BRAIN :" << (b.getBrain()) << std:: endl;
}