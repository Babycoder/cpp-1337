/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 12:06:14 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/04 08:18:34 by ayghazal         ###   ########.fr       */
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

void    Sed::bufferToFile(void)
{
    std::string line;

    OutputFile.open(fileNameReplace);
    if (OutputFile.is_open())
    {
        OutputFile << content;
        OutputFile.close();
    }
    else
        std::cout << "Error file!!" << std::endl;
}

void    Sed::fileToBuffer(void)
{
    std::string line;
    InputFile.open(fileName);
    if (InputFile.is_open())
    {
        while(getline(InputFile, line))
        {
            content += line;
            if (!InputFile.eof())
                content += "\n";
        }
        InputFile.close();
    }
    else
        std::cout << "File error!!" << std::endl;
}

std::string     Sed::find_replace(std::string const& original,  std::string const& src, std::string const& dst)
{
    std::string str;
    std::string::const_iterator current = original.begin();
    std::string::const_iterator end = original.end();
    std::string::const_iterator next = std::search(current, end, src.begin(), src.end());

    while(next != end)
    {
        str.append(current, next);
        str.append(dst);
        current = next + src.length();
        next = std::search(current, end, src.begin(), src.end());
    }
    str.append(current, next);
    return(str);
}

void    Sed::ft_replace(void)
{
    if (Newstr.length() == 0 || Oldstr.length() == 0 || fileName.length() == 0)
        std::cout << "Empty argument!!" << std::endl;
    fileToBuffer();
    content = find_replace(content, Oldstr, Newstr);
    bufferToFile();
}