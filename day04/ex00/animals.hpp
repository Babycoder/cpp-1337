/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 19:12:25 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/17 23:43:01 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALS_HPP
#define ANIMALS_HPP

#include <iostream>
#include <string>

class Animal {
    protected :
        std::string type;
    public :

    Animal(void);
    Animal(std::string str);
    Animal(Animal const & src);
    ~Animal(void);
    
    Animal & operator=(Animal const & rhs);
    
    void        setType(std::string type);
    std::string getType(void) const;
    
    virtual void    makeSound(void) const;
};


class Cat : public Animal{
    private:
    
    protected :
        
    public :

    Cat(void);
    Cat(Cat const & src);
    ~Cat(void);
    
    Cat & operator=(Cat const & rhs);
    
    void    makeSound(void)const;
};

class Dog : public Animal{
    private:
    
    protected :
        
    public :

    Dog(void);
    Dog(Dog const & src);
    ~Dog(void);
    
    Dog & operator=(Dog const & rhs);
    
    void    makeSound(void)const;
};


#endif