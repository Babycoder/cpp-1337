/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:03:04 by ayghazal          #+#    #+#             */
/*   Updated: 2021/08/10 22:58:09 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_H
#define ScavTrap_H

#include "ClapTrap.hpp"


class   ScavTrap : public ClapTrap
{
    public :
        ScavTrap(void);
        ~ScavTrap(void);

        void    guardGate(void);
};

#endif