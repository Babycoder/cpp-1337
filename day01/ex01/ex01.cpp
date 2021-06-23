/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 19:45:04 by ayghazal          #+#    #+#             */
/*   Updated: 2021/06/23 19:45:58 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    memoryLeak()
{
    std::string*    panther = new std::string("String panther");
    
    std::cout << *panther << std::endl;
    
    delete panther;
}