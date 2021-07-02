/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 11:19:04 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/02 11:28:27 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string a_name;
        Weapon &a_weapon;
    public:
        HumanA(std::string name, Weapon &Weapon);
        ~HumanA(void);
        void    setType(std::string type);
        void    attack(void);
};

#endif