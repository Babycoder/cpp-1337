/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:05:49 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/06 11:06:28 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int i = -1;
    int N = 10;
    Zombie *test = zombieHorde(N, "zombie");
    
    while(++i < N)
        test[i].announce();
    delete [] test;
    return (0);
}