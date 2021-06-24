/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:22:49 by ayghazal          #+#    #+#             */
/*   Updated: 2021/06/23 19:32:21 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"


Pony::Pony(std::string name): name(name) {}

void Pony::born()
{
	std::cout << "The " << this->name << " is born\n";
}

void Pony::eat()
{
	std::cout << "The " << this->name << " eat some weats\n";
}

void Pony::run()
{
	std::cout << "The " << this->name << " running so fast\n";
}
