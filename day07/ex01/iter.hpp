/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 02:36:38 by ayghazal          #+#    #+#             */
/*   Updated: 2021/10/07 11:21:25 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T>
void	ft_print(T src)
{
	std::cout << src << std::endl;
}

template <typename T>
void    iter(T *array, int lenght, void (*func)(T &))
{
	for (int i = 0; i < lenght; i++) {
		func(array[i]);
	}
	return;
}

#endif