#ifndef _BUREAUCRAT_
#define _BUREAUCRAT_
#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(std::string name, int grade);
        std::string getName() const ;
        int getGrade() const;
        void increase();
        void decrement(); 
        void executeFrom(Form const &form);
        class GradeTooHightException : public std::exception
        {
            public:
                GradeTooHightException();
                ~GradeTooHightException();
                virtual const char* what() const throw();

        };
        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException();
                ~GradeTooLowException();
                virtual const char* what() const throw();
        };
        void signForm(Form &sign);
};
std::ostream &operator<<(std::ostream &cout, Bureaucrat &classe);

#endif