/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epbook.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:34:21 by ayghazal          #+#    #+#             */
/*   Updated: 2021/06/21 11:55:38 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EPBOOK_H
# define EPBOOK_H
# include <iostream>

class Contact
{
public:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
    void    add(void);
	void	print_contact(void);
};


#endif