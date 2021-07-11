/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 12:35:13 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/06 11:25:06 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int     main()
{
    {
        Weapon right = Weapon("finesse shoot");
        HumanA suarez("suarez", right);
        suarez.attack();
        right.setType("panenka shoot");
        suarez.attack();
    }
    {
        Weapon left = Weapon("finesse shoot");
        HumanB leo("leo");
        leo.setWeapon(left);
        leo.attack();
        left.setType("panenka shoot");
        leo.attack();
    }
}