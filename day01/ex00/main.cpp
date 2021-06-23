/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:19:55 by ayghazal          #+#    #+#             */
/*   Updated: 2021/06/23 17:35:06 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

/*void    ponyOnTheStack()
{
	std::cout << "This is the pony on the stack :\n";
	Pony	pn(std::string("stack_pony"));
	pn.born();
	pn.eat();
}*/

void	ponyOnTheHeap()
{
	std::cout << "This is the pony on the heap :\n";
	Pony	*p = new Pony(std::string("heap_pony"));
	p->born();
	p->run();
	delete p;
}



int main()
{
    //ponyOnTheStack();
    ponyOnTheHeap();
    return(0);
}