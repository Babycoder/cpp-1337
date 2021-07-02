/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 12:27:03 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/02 12:43:24 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): b_name(name) {}

HumanB::~HumanB(void){}

void    HumanB::attack(void)
{
    std::cout << b_name << "attacks with his " << b_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &Weapon)
{
    b_weapon = &Weapon;
}