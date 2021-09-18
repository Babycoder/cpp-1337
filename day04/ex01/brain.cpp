/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:53:21 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/18 20:02:54 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animals.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
    
}

Brain::Brain(Brain const & src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
    return;

}


Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
    
}

Brain &   Brain::operator=(Brain const & rhs)
{

    std::copy(rhs.ideas, rhs.ideas + 100, ideas);
    return *this;
}


std::string*     Brain::getIdeas(void)
{
    return ideas;
}
