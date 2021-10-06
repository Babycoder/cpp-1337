/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 01:54:21 by ayghazal          #+#    #+#             */
/*   Updated: 2021/10/06 01:57:04 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>

class Base
{
	private:

	public:
		virtual ~Base();
};

class A: public Base
{
	private:
    
	public:
		A();
		virtual ~A();

};

class B: public Base
{
	private:
    
	public:
		B();
		virtual ~B();
};

class C : public Base
{
	private:

	public:
		C();
		virtual ~C();
};

#endif