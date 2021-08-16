/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:16:29 by ayghazal          #+#    #+#             */
/*   Updated: 2021/08/16 23:54:25 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	tibo("tibo");
	ClapTrap	ennemy("ennemy");

	tibo.attack("ennemy");
	tibo.guardGate();
	ennemy.takeDamage(10);
	ennemy.beRepaired(2);
	
	return 0;
}