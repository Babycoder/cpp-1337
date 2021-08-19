/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:16:27 by ayghazal          #+#    #+#             */
/*   Updated: 2021/08/19 16:42:27 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClAPTRAP_HPP
#define ClAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

    private :
        std::string _Name;
        int _Hit;
        int _Energy;
        int _Attack;
    
    public  :
        ClapTrap(void);
        ClapTrap(std::string str);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap(void);
            
        ClapTrap	&	operator=(ClapTrap const & rhs);
        
        void 		attack(std::string const & target);
	    void 		takeDamage(unsigned int amount);
	    void		beRepaired(unsigned int amount);
        
        void		setName(const std::string name);
        std::string getName(void);
        
        void		setHit(const int hit);
        int         getHit(void);
        
        void        setAttack(int attack);
        int         getAttack(void);
    
        void        setEnergy(int energy);
        int         getEnergy(void);
};

#endif