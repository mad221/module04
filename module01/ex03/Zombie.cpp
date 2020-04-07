#include "Zombie.hpp"

Zombie::Zombie()
{
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

void Zombie::announce()
{
     std::cout << _name << " " << _type << " is announced ..." << std::endl;
}

static std::string randomName()
{
    std::string names[] = {"john", "Jack", "Richard", "lili", "Lolo", "Romeo"};
    return (names[rand() % 5]);
}

static std::string randomType()
{
    std::string types[] = {"moche", "con", "mechant", "gentil"};
    return (types[rand() % 3]);
}

void Zombie::setName()
{
    _name = randomName();
}

void Zombie::setType()
{
    _type = randomType();
}