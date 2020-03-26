#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    _grade = 150;
    _name = "unkown";
}

Bureaucrat::~Bureaucrat()
{
}


std::string Bureaucrat::GetName()
{
    return (_name);
}

int Bureaucrat::getGrade()
{
    return (_grade);
}

void Bureaucrat::increase()
{
        if (_grade <= 1)
            throw  GradeTooHightException();
        _grade--;
}

void Bureaucrat::decrement()
{

        if (_grade <= 150)
            throw GradeTooLowException();
        _grade++;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{

        if (grade < 1 || grade > 150)
        {
            if (grade > 1)
            {
               throw GradeTooHightException();
            }
            if (grade < 1)
            {
                throw GradeTooLowException();
            }
        }       
        _grade = grade;
        _name = name;
}

std::ostream &operator<<(std::ostream &cout, Bureaucrat &classe)
{
    cout << classe.GetName() << " ,bureaucrate grade " << classe.getGrade();
    return (cout);
}

Bureaucrat::GradeTooHightException::GradeTooHightException()
{

}
Bureaucrat::GradeTooHightException::~GradeTooHightException()
{

}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{

}

Bureaucrat::GradeTooLowException::~GradeTooLowException()
{

}

const char* Bureaucrat::GradeTooHightException::what() const throw()
{
    return ("Error: Grade too hight");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Error: Grade too low");
}

void Bureaucrat::signForm(Form &classe)
{   
    try
    {
        if (classe.beSigned(*this) != true)
            {
                throw Form::GradeTooLowException();
            }
        std::cout << GetName() << " signs " << classe.getName() << std::endl;
    }
    catch(std::exception &text)
    {
        std::cout << GetName() << " can't sign " << classe.getName() << " because " << text.what() << std::endl; 
    }
}