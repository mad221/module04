#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
    std::cout << "please enter parameter" << std::endl;
    return ;
}

Sorcerer::Sorcerer(std::string p_name, std::string p_title)
{
    name = p_name;
    title = p_title;
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << name << ", "<< title << ", is dead. Consequences will never be the same" << std::endl;
}

std::string Sorcerer::get_name() const
{
    return (name);
}

std::string Sorcerer::get_title() const
{
    return (title);
}

std::ostream &operator<<(std::ostream &cout, const Sorcerer &classe)
{
    cout << "I am " << classe.get_name() << " ," << classe.get_title() << ", and I like ponies!" << std::endl; 
    return (cout);
}

void Sorcerer::polymorph(Victim const &classe) const
{
    classe.getPolymorphed();
} 