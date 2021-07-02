/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:58:55 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/02 11:15:13 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon(std::string type);
        ~Weapon(void);
        std::string const &getType(void);
        void    setType(std::string type);
};

#endif