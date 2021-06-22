/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epbook.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 20:32:16 by ayghazal          #+#    #+#             */
/*   Updated: 2021/06/21 15:57:30 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "epbook.hpp"

std::string  get_input()
{
	std::string input;

	getline(std::cin, input);
    return (input);
}

void    Contact::print_contact(void)
{
    std::cout << "First Name: ";
    std::cout << this->first_name << std::endl;
    std::cout << "Last Name: ";
    std::cout <<  this->last_name << std::endl;
    std::cout << "nickname: ";
    std::cout <<  this->nick_name << std::endl;
    std::cout << "login: ";
    std::cout <<  this->login << std::endl;
    std::cout << "postal address: ";
    std::cout <<  this->postal_address << std::endl;
    std::cout << "email address: ";
    std::cout <<  this->email_address << std::endl;
    std::cout << "phone number: ";
    std::cout <<  this->phone_number << std::endl;
    std::cout << "birthday date: ";
    std::cout <<  this->birthday_date << std::endl;
    std::cout << "favorite meal: ";
    std::cout <<  this->favorite_meal << std::endl;
    std::cout << "underwear color: ";
    std::cout <<  this->underwear_color << std::endl;
    std::cout << "darkest secret: ";
    std::cout <<  this->darkest_secret << std::endl;
}

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


void	add_contact(Contact list[], int size)
{
	list[size].add();
}

std::string ft_output(std::string str)
{
	int len = str.length();
	if (len == 10)
		return str;
	if (len < 10)
	{
		str.append(10 - str.length(), ' ');
		return str;
	}
	if (len > 10)
	{
		return str.substr(0, 9) + '.';
	}
	return NULL;
}

void    show_contacts(Contact contact[], int size)
{
    std::cout << "id" << "|";
	std::cout << ft_output("first name") << "|";
	std::cout << ft_output("last name") << "|";
	std::cout << ft_output("nickname") << "|";
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << i << " |";
		std::cout << ft_output(contact[i].first_name) << "|";
		std::cout << ft_output(contact[i].last_name) << "|";
		std::cout << ft_output(contact[i].nick_name) << "|";
		std::cout << std::endl;
	}

}

int		get_index(int size)
{
	int index = 0;
    std::string str = "";

 	while (true) {
		std::cout << "Please enter an ID: ";
		std::getline(std::cin, str);
		std::stringstream myStream(str);
		if (myStream >> index)
			if (index >= 0 && index < size)
				break;
		std::cout << "Invalid ID !!" << std::endl;
 	}
 	return index;
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
            index = get_index(size);
            contact[index].print_contact();

        }
        else if (choice == "EXIT")
            return(0) ;
    } 
	return(0);
}
