/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:05:49 by ayghazal          #+#    #+#             */
/*   Updated: 2021/06/29 16:35:56 by ayghazal         ###   ########.fr       */
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
    
    return (0);
}