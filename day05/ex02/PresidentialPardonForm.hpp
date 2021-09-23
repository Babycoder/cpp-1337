/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:02:11 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/23 23:37:00 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
        std::string    	_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm(std::string target);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm	&	operator=(PresidentialPardonForm const & rhs);

		void execute(Bureaucrat const &executor) const;
};

#endif