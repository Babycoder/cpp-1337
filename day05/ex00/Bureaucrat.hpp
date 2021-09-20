/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:03:34 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/20 16:43:23 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <string>

class Bureaucrat {
    private :
        std::string _name;
        int         _grade;
    
    public :
        Bureaucrat(void);
        Bureaucrat(Bureaucrat const & src);
        Bureaucrat(std::string name, int grade);
        virtual ~Bureaucrat(void);
        
        Bureaucrat & operator=(Bureaucrat const & rhs);
        
        std::string getName(void)const;
        int         getGrade(void)const;
        
        void	    incrementGrade(void);
        void        decrementGrade(void);
    

};

// std::ostream	&	operator<<(std::ostream & o, Bureaucrat const & bureaucrat);

#endif