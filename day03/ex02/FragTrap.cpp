/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:31:17 by ayghazal          #+#    #+#             */
/*   Updated: 2021/08/19 16:47:40 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap default constructor called!!" << std::endl;
	setHit(100);
	setEnergy(100);
	setAttack(30);

}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	*this = src;
}

FragTrap	&	FragTrap::operator=(FragTrap const & src)
{
	ClapTrap::operator=(src);
	return *this;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap default constructor with name called!!" << std::endl;
	setHit(100);
	setEnergy(100);
	setAttack(30);
}

FragTrap::~FragTrap(void)
{
	std::cout  << "FragTrap Destructor called!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout  << "FragTrap" << getName() << " made a high fives" << std::endl;
}