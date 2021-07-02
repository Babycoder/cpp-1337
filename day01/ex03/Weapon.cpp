/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 11:09:54 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/02 11:18:25 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type):_type(type){}

Weapon::~Weapon(void){}

std::string const &Weapon::getType(void)
{
    return(_type);
}

void    Weapon::setType(std::string type)
{
    _type = type;
}