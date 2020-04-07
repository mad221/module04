#include "HumanA.hpp"

HumanA::HumanA(const std::string str, Weapon &weapon) : _weapon(&weapon)
{
    _name = str;
}

void HumanA::attack()
{
    std::cout << _name << " attack with " << _weapon->getType() << std::endl;
}