/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 12:06:14 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/10 19:05:58 by ayghazal         ###   ########.fr       */
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


void    Sed::ft_replace(void)
{
    std::string line;
    size_t      found;
    
    
    if (Newstr.length() == 0 || Oldstr.length() == 0 || fileName.length() == 0)
        std::cout << "Empty argument!!" << std::endl;
    InputFile.open(fileName.c_str());
    OutputFile.open(fileNameReplace.c_str());
    
    if (InputFile.is_open())
    {
        if(OutputFile.is_open())
        {
            while(std::getline(InputFile, line))
            {
                do{
                    found = line.find(Oldstr);
                    if (found != std::string::npos)
						line.erase(found, Oldstr.length()).insert(found, Newstr);
                }while(found != std::string::npos);
                OutputFile << line << std::endl;                   
            }
            OutputFile.close();
        }
        else
            std::cout << "File error!!" << std::endl;
        InputFile.close();
    }
    else
        std::cout << "File error!!" << std::endl;
}