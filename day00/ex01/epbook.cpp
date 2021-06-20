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


void    ft_menu()
{
    std::cout << "Choose an option:" << std::endl;
	std::cout << "ADD _ SEARCH _ EXIT" << std::endl;
}

string  get_input()
{
	string input;

	while (1) {
	    getline(cin, input);
        if (cin.eof())
        {
            cout << "End!" << std::endl;
            exit(0);
        }
        if (!input.empty())
            break;
        cin.clear();
    }
    return (input);
}

void    Contact::add(void)
{
    cout << "First Name: ";
    this->first_name = get_input();
    cout << "Last Name: ";
    this->last_name = get_input();
    cout << "nickname: ";
    this->nick_name = get_input();
    cout << "login: ";
    this->login = get_input();
    cout << "postal address: ";
    this->postal_address = get_input();
    cout << "email address: ";
    this->email_address = get_input();
    cout << "phone number: ";
    this->phone_number = get_input();
    cout << "birthday date: ";
    this->birthday_date = get_input();
    cout << "favorite meal: ";
    this->favorite_meal = get_input();
    cout << "underwear color: ";
    this->underwear_color = get_input();
    cout << "darkest secret: ";
    this->darkest_secret = get_input();
    return ;
}

void	add_contact(Contact list[], int size)
{
	list[size].add();
}


int main()
{
    Contact contact[8];
    int     size;
    string choice;
	//int			index;
    
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
        else if (choice == "EXIT")
            return(0);
    }
    
}