#include "Form.hpp"

Form::Form()
{
    _sign = false;
}



Form::Form(std::string name, int grade_to_sign, int grade_to_execut)
{

        _name = name;
        _sign = false;
        if (grade_to_execut < 0 || grade_to_execut > 150)
        {
            if (grade_to_execut < 0)
            {
                std::cout << "Grade to execut ";
                throw Form::GradeTooHightException();
            }
            if (grade_to_execut > 0)
            {
                std::cout << "Grade to execut ";
                throw Form::GradeTooLowException();
            }
        }
        if (grade_to_sign < 0 || grade_to_sign > 150)
        {
            if (grade_to_sign < 0)
            {
                std::cout << "Grade to sign ";
                throw Form::GradeTooHightException();
            }
            if (grade_to_sign > 0)
            {
                std::cout << "Grade to sign ";
                throw Form::GradeTooLowException();
            }
         }
        _grade_to_execut = grade_to_execut;
        _grade_to_sign = grade_to_sign;
}

int Form::getGradeExecut() const
{
    return (_grade_to_execut);
}

int Form::getGradeSign()
{
    return(_grade_to_sign);
}

bool Form::getSign() const
{
    return (_sign);
}

std::string Form::getName() const
{
    return(_name);
}

Form::~Form()
{

}

bool Form::beSigned(Bureaucrat &man)
{
        if (man.getGrade() > _grade_to_sign)
        {
            //throw Form::GradeTooLowException();
            return (_sign);
        }
        _sign = true;
        return (_sign);

}

std::ostream &operator<<(std::ostream &cout, Form &classe)
{
    cout << classe.getName() << " , grade to execute = " << classe.getGradeExecut() << ", grade to sign = " << classe.getGradeSign() << " signed ? " << classe.getSign();
    return (cout);
}

Form::GradeTooLowException::GradeTooLowException()
{}


Form::GradeTooLowException::~GradeTooLowException()
{}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Error: Too low !");
}


Form::GradeTooHightException::GradeTooHightException()
{}

Form::GradeTooHightException::~GradeTooHightException()
{}

const char* Form::GradeTooHightException::what() const throw()
{
    return ("Error Too hight");
}