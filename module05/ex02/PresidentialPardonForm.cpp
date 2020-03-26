#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm()
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form(target, 25, 5)
{
}

void PresidentialPardonForm::execute(Bureaucrat const &execute) const
{
        if (getSign() == true && execute.getGrade() <= getGradeExecut())
    {
        std::cout << execute.getName() << " is forgive" << std::endl;
    }   
    else
        throw GradeTooLowException();
}
