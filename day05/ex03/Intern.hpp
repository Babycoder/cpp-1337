/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:56:53 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/30 17:18:58 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <stdexcept>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(const Intern& src);
		~Intern(void);

		Intern	&operator= (const Intern& rhs);

		Form	*makeForm(std::string name, std::string target);

		typedef Form* (Intern::*FunctionPointer)(std::string);
		
		class FormNotFoundException : public std::exception
		{
			public:
				FormNotFoundException(void);
				virtual ~FormNotFoundException(void) throw();
				virtual const char    *what() const throw();
		};
	
	
	private:
		Form*						_newPresidentialPardonForm(std::string target);
		Form*						_newRobotomyRequestForm(std::string target);
		Form*						_newShrubberyCreationForm(std::string target);
		static std::string				_forms[3];
		static FunctionPointer 			_functionPointers[3];
};


#endif