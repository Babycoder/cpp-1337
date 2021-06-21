/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epbook.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 20:32:16 by ayghazal          #+#    #+#             */
/*   Updated: 2021/06/20 23:52:37 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "epbook.hpp"


void    Contact::add(void)
{
    std::cout << "First Name: ";
    this->first_name = get_input();
    std::cout << "Last Name: ";
    this->last_name = get_input();
    std::cout << "nickname: ";
    this->nick_name = get_input();
    std::cout << "login: ";
    this->login = get_input();
    std::cout << "postal address: ";
    this->postal_address = get_input();
    std::cout << "email address: ";
    this->email_address = get_input();
    std::cout << "phone number: ";
    this->phone_number = get_input();
    std::cout << "birthday date: ";
    this->birthday_date = get_input();
    std::cout << "favorite meal: ";
    this->favorite_meal = get_input();
    std::cout << "underwear color: ";
    this->underwear_color = get_input();
    std::cout << "darkest secret: ";
    this->darkest_secret = get_input();
    return ;
}

void    ft_menu()
{
    std::cout << "==> Choose an option <==" << std::endl;
	std::cout << "ADD _ SEARCH _ EXIT" << std::endl;
}

std::string  get_input()
{
	std::string input;

	getline(std::cin, input);
    return (input);
}

void	add_contact(Contact list[], int size)
{
	list[size].add();
}

void    show_contacts(Contact list[], int size)
{

}

int main()
{
    Contact contact[8];
    int     size;
    int     index;
    std::string choice;
    
    size = 0;
    std::cout << "*****  Welcome to Ezio's E-phoneBook   ******" << std::endl;
    while(1)
    {
        ft_menu();
        choice = get_input();
        if (choice == "ADD")
		{
			if (size == 8)
			{
				std::cout << "List is FULL" << std::endl;
				continue ;
			}
			add_contact(contact, size);
			size++;
		}
        else if (choice == "SEARCH")
        {
            if (size  == 0)
            {
                std::cout << "List is Empy!!" << std::endl;
                continue ; 
            }
            show_contacts(contact, size);
            //index = get_index();
            //print_contact(contact,size);

        }
        else if (choice == "EXIT")
            return(0) ;

    }
    
}