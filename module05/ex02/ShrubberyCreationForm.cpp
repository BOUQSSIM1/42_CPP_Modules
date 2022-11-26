/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:07:56 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/26 19:11:23 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form()
{};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form(target, 145, 137)
{};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &_ShrubberyCreationForm)
{  
  (void)_ShrubberyCreationForm;
};

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &_ShrubberyCreationForm)
{
  (void)_ShrubberyCreationForm;
  return *this;
};

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if(!ShrubberyCreationForm::getSign() && executor.getGrade() > ShrubberyCreationForm::getGradeTosign())
        throw GradeTooLowException("Cannot Execute The Form");
    std::ofstream Outfile(executor.getBureaucratName() + "_shrubbery");
    if(!Outfile){std::cout << "Failed !" << std::endl; exit(0);}
    Outfile << "\
       ###\n\
      #o###\n\
    #####o###\n\
   #o###|#/###\n\
    ####|/#o#\n\
     # }|{  #\n\
       }|{\n\
       ";
    Outfile.close();
};

ShrubberyCreationForm::~ShrubberyCreationForm()
{};