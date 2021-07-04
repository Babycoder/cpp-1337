/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 11:58:55 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/04 08:28:00 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int     main(int ac, char **av)
{
    if (ac != 4)
        std::cout << "Bad arguments!!" << std::endl;
    else
    {
        Sed     sed(av[1], av[2], av[3]);
        sed.ft_replace();
    }
    return(0);
}