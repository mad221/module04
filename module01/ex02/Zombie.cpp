#include "Zombie.hpp"

Zombie::Zombie()
{
    _type = "unknow";
    _name = "no _name";
    std::cout << _name << " " << _type << " Braiiiiiinnnssss ..." << std::endl;
}

Zombie::~Zombie()
{
  std::cout << _name << ": I 'm dead.....brrrrrr" << std::endl;  
}

Zombie::Zombie(const std::string &name, const std::string &type)
{
    _name = name;
    _type = type;
    std::cout << _name << " " << _type << " Braiiiiiinnnssss ..." << std::endl;
}