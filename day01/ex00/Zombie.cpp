/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:00:17 by ayghazal          #+#    #+#             */
/*   Updated: 2021/06/29 12:23:10 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string str) : name(str)
{
    return;
}

Zombie::~Zombie(void)
{
    std::cout << "The Zombie: "<< this->name << " is Dead" << std::endl;
    return;
}

void    Zombie::announce(void)
{
    std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}