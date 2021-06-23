/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:11:52 by ayghazal          #+#    #+#             */
/*   Updated: 2021/06/23 19:31:42 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
#define PONY_H

# include <iostream>

class   Pony
{
    private:
        std::string name;
	public:
	    Pony(std::string name);
		void born();
		void eat();
		void run();
};


#endif