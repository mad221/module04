#ifndef _BUREAUCRAT_
#define _BUREAUCRAT_
#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(std::string name, int grade);
        std::string GetName();
        int getGrade();
        void increase();
        void decrement(); 
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
};
std::ostream &operator<<(std::ostream &cout, Bureaucrat &classe);

#endif