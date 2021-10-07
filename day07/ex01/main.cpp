/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 02:36:35 by ayghazal          #+#    #+#             */
/*   Updated: 2021/10/07 11:24:45 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main()
{
    
    std::string     str[2] = {"Hello", "BooBiiiZ"};
    int     nb[5] = {1,3,3,7};

    iter(str, 2, &ft_print);
    iter(nb, 4, &ft_print);
    return 0;
    return 0;
}