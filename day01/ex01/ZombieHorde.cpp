/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:19:56 by ayghazal          #+#    #+#             */
/*   Updated: 2021/06/29 19:34:44 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    int i = -1;
    Zombie *zombies = new Zombie[N];

    while(++i < N)
        zombies[i].setname(name, i);
    
    return(zombies);
}