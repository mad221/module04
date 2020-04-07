#include "HumanB.hpp"

HumanB::HumanB(const std::string str, Weapon &weapon)
{
    _name = str;
    _weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << _name << " attack with " << _weapon->getType() << std::endl;
}