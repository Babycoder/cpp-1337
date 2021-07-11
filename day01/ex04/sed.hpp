/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 12:06:17 by ayghazal          #+#    #+#             */
/*   Updated: 2021/07/10 18:41:28 by ayghazal         ###   ########.fr       */
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
        std::ifstream InputFile;
        std::ofstream OutputFile;
        
    public:
        Sed(std::string fileName, std::string Oldstr, std::string Newstr);
        ~Sed();
        void    ft_replace(void);
};


#endif