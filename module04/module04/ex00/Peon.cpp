#include "Peon.hpp"

Peon::Peon()
{
}

Peon::Peon(std::string p_name) : Victim(p_name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed(void) const
{
    std::cout << name << " has been turned into a pink pony !" << std::endl;
}