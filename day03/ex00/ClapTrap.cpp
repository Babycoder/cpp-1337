/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:16:18 by ayghazal          #+#    #+#             */
/*   Updated: 2021/08/09 14:52:53 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
   

ClapTrap::ClapTrap(void)
{
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string str) : _Name(str), _Hit(10), _Energy(10), _Attack(0){
}

ClapTrap::ClapTrap(ClapTrap const & src){
    
    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return;
}

ClapTrap::~ClapTrap(void){
    std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getName(void)
{
    return _Name;
}

void    ClapTrap::setName(std::string name)
{
    _Name = name;
}

void    ClapTrap::setHit(const int hit)
{
    _Hit = hit;
}

int     ClapTrap::getHit(void)
{
    return _Hit;
}

void    ClapTrap::setAttack(int attack)
{
    _Attack = attack;
}

int     ClapTrap::getAttack(void)
{
    return _Attack;
}

void    ClapTrap::setEnergy(int energy)
{
    _Energy = energy;
}

int     ClapTrap::getEnergy(void)
{
    return _Energy;
}

void    ClapTrap::attack(std::string const & target)
{
    	std::cout << "ClapTrap <" << getName() << "> attacks <" << target << ">, causing <"<< getAttack() << "> points of damage!" << std::endl;
}

void 		ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << getName() << " lose : " << amount << " points" << std::endl;
    setEnergy(getEnergy() - amount);
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << getName() << " repairs : " << amount << " points" << std::endl;
    setEnergy(getEnergy() + amount);
}

ClapTrap &	ClapTrap::operator= (ClapTrap const & src)
{	
	setName(src._Name);
	setAttack(src._Attack);
	setEnergy(src._Energy);
	setHit(src._Hit);
	return *this;
}

