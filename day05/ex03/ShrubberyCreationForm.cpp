/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:02:19 by ayghazal          #+#    #+#             */
/*   Updated: 2021/09/23 22:41:33 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", false, 145, 137), _fileName("_Shrubbery")
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): Form(src), _fileName(src._fileName)
{

}


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :Form("ShrubberyCreationForm",	false, 145, 137), _fileName(target + "_Shrubbery")
{
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm	&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	_fileName = rhs._fileName;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::ofstream  out_file;
    
    Form::execute(executor);
    out_file.open(_fileName.c_str());
    out_file << "          1          " << std::endl;
    out_file << "         / \\         " << std::endl;
    out_file << "        /   \\        " << std::endl;
    out_file << "       /     \\       " << std::endl;
    out_file << "      2       3      " << std::endl;
    out_file << "     / \\     / \\     " << std::endl;
    out_file << "    4   5   6   7    " << std::endl;
    out_file << "   /   / \\     / \\   " << std::endl;
    out_file << "  8   9   1   2   3  " << std::endl;
    out_file << "     /               " << std::endl;
    out_file << "    4                " << std::endl;
    out_file.close();
    return ;
}