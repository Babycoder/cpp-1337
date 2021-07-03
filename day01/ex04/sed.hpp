/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 12:06:17 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/03 20:14:40 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Sed_HPP
 #define Sed_HPP

#include <iostream>
#include <fstream>
#include <string>

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
        std::string      replaceAll( std::string const& original, std::string const& src, std::string const& dst);
        
        
    public:
        Sed(std::string fileName, std::string Oldstr, std::string Newstr);
        ~Sed();
        void    ft_replace(void);
};


#endif