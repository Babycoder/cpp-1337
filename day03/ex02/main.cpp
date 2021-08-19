/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:48:26 by ayghazal          #+#    #+#             */
/*   Updated: 2021/08/19 16:48:53 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	tibo("tibo");
	ClapTrap	ennemy("ennemy");

	tibo.attack("ennemy");
	tibo.highFivesGuys();
	ennemy.takeDamage(10);
	ennemy.beRepaired(2);
	
	return 0;
}