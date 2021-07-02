/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 11:29:39 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/02 12:09:25 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): a_name(name), a_weapon(weapon){}

HumanA::~HumanA(void) {}

void      HumanA::attack(void)
{
    std::cout << a_name << " attacks with his " << a_weapon.getType() << std::endl;
}

void    HumanA::setType(std::string type)
{
    a_weapon.setType(type);
}