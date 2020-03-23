#include "Victim.hpp"

Victim::Victim(std::string p_name)
{
    name = p_name;
    std::cout << "A random victime called " << name << " just appeared!" << std::endl;
}

Victim::Victim()
{
    std::cout << "no name" << std::endl;
}

Victim::~Victim()
{
    std::cout << "The victime " << name << " died for not apparent reason" << std::endl;
}

std::string Victim::get_name() const
{
    return (name);
}

std::ostream &operator<<(std::ostream &cout, const Victim &classe)
{
    cout << "I'm " << classe.get_name() << " and I like otters!" << std::endl;
    return (cout);
}

void Victim::getPolymorphed() const
{
    std::cout << name << " was just polymorphed in a cute little sheep" << std::endl;
}