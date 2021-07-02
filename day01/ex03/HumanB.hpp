/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 12:09:39 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/02 12:26:17 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
#define HUMAN_B_H

#include <iostream>
#include <string.h>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string b_name;
        Weapon      *b_weapon;
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void    setWeapon(Weapon &weapon);
        void    attack(void);
};

#endif