/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 12:06:17 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/04 08:03:38 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Sed_HPP
 #define Sed_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

class Sed
{
    private:
        std::string fileName;
        std::string fileNameReplace;
        std::string Oldstr;
        std::string Newstr;
        std::string content;
        std::ifstream InputFile;
        std::ofstream OutputFile;
        void        fileToBuffer(void);
        void        bufferToFile(void);
        std::string      find_replace( std::string const& original, std::string const& src, std::string const& dst);
        
        
    public:
        Sed(std::string fileName, std::string Oldstr, std::string Newstr);
        ~Sed();
        void    ft_replace(void);
};


#endif