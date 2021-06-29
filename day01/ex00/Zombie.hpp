/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:00:21 by ayghazal          #+#    #+#             */
/*   Updated: 2021/06/29 12:29:59 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string str);
        ~Zombie(void);
        void    announce(void);
};

Zombie  *newZombie(std::string name);
void    randomChump( std::string name);

#endif
