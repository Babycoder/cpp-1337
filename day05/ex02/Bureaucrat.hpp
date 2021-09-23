/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:03:34 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/23 23:47:35 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat {
    private :
        std::string _name;
        int         _grade;
    
    public :
        class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				virtual ~GradeTooHighException(void) throw();
				virtual const char    *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				virtual ~GradeTooLowException(void) throw();
				virtual const char    *what() const throw();
		};
    
        Bureaucrat(void);
        Bureaucrat(Bureaucrat const & src);
        Bureaucrat(std::string name, int grade);
        virtual ~Bureaucrat(void);
        
        Bureaucrat & operator=(Bureaucrat const & rhs);
        
        std::string getName(void)const;
        int         getGrade(void)const;
        
        void	    incrementGrade(void);
        void        decrementGrade(void);
        void        signForm(Form &form);
        void		executeForm(Form const & form);

        
    

};

std::ostream	&	operator<<(std::ostream & o, Bureaucrat const & bureaucrat);

#endif