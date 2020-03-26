#include "RobotomyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm()
{

}

RobotmyRequestForm::~RobotmyRequestForm()
{

}

RobotmyRequestForm::RobotmyRequestForm(const std::string &target) : Form(target, 72, 45)
{

}


void RobotmyRequestForm::execute(Bureaucrat const &execute) const
{
    if (getSign() == true && execute.getGrade() <= getGradeExecut())
    {
        system("afplay song.mp3 &");
        int i = rand() % 100;
        if (i%2 == 0 )
        {
            std::cout << execute.getName() << " has been robotomized" << std::endl;
        }
        else
        {
                        std::cout << execute.getName() << " has failed to be robotomized" << std::endl;

        }
    }
    else 
    {
        throw GradeTooLowException();
    }
}
