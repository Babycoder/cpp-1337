/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:16:29 by ayghazal          #+#    #+#             */
/*   Updated: 2021/08/09 12:06:33 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	tibo("tibo");
	std::cout << tibo.getEnergy() << std::endl;
    tibo.beRepaired(50);
	std::cout << tibo.getEnergy() << std::endl;
	
    return 0;
}