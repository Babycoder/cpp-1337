/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:06:24 by ayghazal          #+#    #+#             */
/*   Updated: 2021/06/29 19:32:39 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    //std::cout << "Constructo called" << std::endl;
    return;
}

Zombie::~Zombie(void)
{
    std::cout << "The Zombie: "<< this->name << " is Dead" << std::endl;
    return;
}

void    Zombie::setname(std::string name, int i)
{
    std::ostringstream tmp;
    std::string str;

    tmp << i;
    str = tmp.str();
    this->name = name + str;  
}

void    Zombie::announce(void)
{
    std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}