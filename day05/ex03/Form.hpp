/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:02:23 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/23 23:35:21 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>
#include <cstdlib>

class Bureaucrat;

class Form {
    private:
        const std::string		_name;
		bool					_signed;
		const int		        _gradeToSign;
		const int		        _gradeToExecute;
    public:
        Form();
		Form(Form const & src);
		Form(std::string name, bool issigned, unsigned int gradeToSign, unsigned int gradeToExecute);
		virtual ~Form();
        
        Form	&	operator=(Form const & rhs);
        bool                      getSigned(void) const;
        
		int                       getGradeToSign(void) const;
		int                       getGradeToExecute(void) const;
		std::string               getName(void) const;
        
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
		class FormNotSignedException : public std::exception
		{
			public:
				FormNotSignedException(void);
				virtual ~FormNotSignedException(void) throw();
				virtual const char    *what() const throw();
		};

		void	beSigned(Bureaucrat & Bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const;
    
};

std::ostream                  &operator<<(std::ostream &out, const Form &rhs);

#endif