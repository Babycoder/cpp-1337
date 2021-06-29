/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:58:48 by ayghazal          #+#    #+#             */
/*   Updated: 2021/06/29 11:17:21 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(void)
{
    std::cout << "Constructor called" << std::endl;
    return;
}

Zombie::~Zombie(void)
{
    std::cout << "Deconstructor called" << std::endl;
    return;
}



int     main()
{

    Zombie test;

    return(0);
}