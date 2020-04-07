#ifndef _ZOMBIEHORD_
#define _ZOMBIEHORD_
#include <string>
#include <iostream>
#include "Zombie.hpp"

class ZombieHord
{
    public:
        ZombieHord(){_hord = NULL; _n = 0;};
        ~ZombieHord();
        ZombieHord(int n);
        void announce();
        void setName();
        void setType();

    private:
        Zombie *_hord;
        int     _n;


};

#endif
