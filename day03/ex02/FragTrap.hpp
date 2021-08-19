/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:31:36 by ayghazal          #+#    #+#             */
/*   Updated: 2021/08/19 16:42:51 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private :

    public :
        FragTrap(void);
        FragTrap(FragTrap const & src);
        FragTrap(std::string name);
        ~FragTrap(void);

        void highFivesGuys(void);

        FragTrap    &   operator=(FragTrap const & src);

};

#endif