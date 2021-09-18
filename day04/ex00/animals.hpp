/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 19:12:25 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/18 13:43:10 by ayghazal         ###   ########.fr       */
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
     virtual ~Animal(void);
    
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

class WrongAnimal {
    protected :
        std::string type;
    public :

    WrongAnimal(void);
    WrongAnimal(std::string str);
    WrongAnimal(WrongAnimal const & src);
    virtual ~WrongAnimal(void);
    
    WrongAnimal & operator=(WrongAnimal const & rhs);
    
    void        setType(std::string type);
    std::string getType(void) const;
    
    void    makeSound(void) const;
};

class WrongCat : public WrongAnimal{
    private:
    
    protected :
        
    public :

    WrongCat(void);
    WrongCat(WrongCat const & src);
    ~WrongCat(void);
    
    WrongCat & operator=(WrongCat const & rhs);
    
    void    makeSound(void)const;
};

#endif