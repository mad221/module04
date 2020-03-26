#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

int Intern::ft_search(const std::string &name)
{

    std::string _name[3]= {"robotomy request", "shrubberry Creation", "presidential pardon"};
    int i = 0;
    while (i < 3)
    {
        if (_name[i] == name)
        {
            std::cout << name << " is create by the intern" << std::endl;
            return (i);
        }
        i++;
    }
    std::cout << name << " not found by the intern....." << std::endl;
    return (0);
}

Form *Intern::_good_class(int nb,const std::string &target)
{
    if (nb == 1)
        return (new RobotmyRequestForm(target));
    if (nb == 2)
        return (new ShrubberyCreationForm(target));
    if (nb == 3)
        return (new PresidentialPardonForm(target));
    return (NULL);
}

Form *Intern::makeForm(const std::string &name,const std::string &target)
{
    return (_good_class(ft_search(name), target));
}