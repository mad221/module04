#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType()
{
    _type = "de type moche et vert ";
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    setZombieType();
    return (new Zombie(name, _type));
}
