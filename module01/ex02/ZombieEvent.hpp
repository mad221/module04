#ifndef _ZOMBIEVENT_
#define _ZOMBIEVENT_
#include <string>
#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
    public:
        ZombieEvent(){};
        ~ZombieEvent(){};
        void setZombieType();
        Zombie *newZombie(std::string name);

    private:
        std::string _type;
};

#endif