#ifndef _SUPER_
#define _SUPER_
#include <iostream>
#include <string>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        ~SuperMutant();
        virtual void takeDamage(int damage);

    private:

};


#endif