#ifndef _SHRUBERRY_
#define _SHRUBERRY_
#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        virtual void execute(Bureaucrat const &execute) const;
};


#endif