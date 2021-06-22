/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 14:34:05 by ayghazal          #+#    #+#             */
/*   Updated: 2021/06/21 14:34:10 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char    capp(char c)
{
    if (c >= 97 && c <= 122)
        c -= 32;
    return (c);
}

int     main(int ac, char **av)
{
    int i = 1;
    int j;
    if (ac > 1)
    {
        while(i < ac)
        {
            j = 0;
            while(av[i][j] != '\0')
            {
                std::cout << capp(av[i][j]);
                j++;
            }
            i++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    std::cout << std::endl;

    return (0);
}
