/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:03:04 by ayghazal          #+#    #+#             */
/*   Updated: 2021/08/16 23:57:59 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_H
#define ScavTrap_H

#include "ClapTrap.hpp"


class   ScavTrap : public ClapTrap
{
    private :

    public :
        ScavTrap(void);
        ScavTrap(ScavTrap const & src);
        ScavTrap(std::string name);
        ~ScavTrap(void);
        ScavTrap	&	operator=(ScavTrap const & rhs);


        void    guardGate(void);
};

#endif