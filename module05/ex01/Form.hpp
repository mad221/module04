#ifndef _FORM_
#define _FORM_
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        bool _sign;
        std::string _name;
        int _grade_to_sign;
        int _grade_to_execut;
    public:
        Form();
        Form(std::string name, int grade_to_sign, int grade_to_execut);
        ~Form();
        int getGradeSign();
        int getGradeExecut();
        std::string getName();
        bool getSign();
        class GradeTooHightException : public std::exception 
        {
            public:
                GradeTooHightException();
                ~GradeTooHightException();
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException();
                ~GradeTooLowException();
                virtual const char *what() const throw();

        };
        bool beSigned(Bureaucrat &man);
};

std::ostream &operator<<(std::ostream &cout, Form &classe);

#endif