/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 12:06:14 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/03 20:17:21 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

Sed::Sed(std::string fileName, std::string Oldstr, std::string Newstr): fileName(fileName), Oldstr(Oldstr), Newstr(Newstr)
{
    fileNameReplace = fileName + ".replace";
}

Sed::~Sed()
{
    
}