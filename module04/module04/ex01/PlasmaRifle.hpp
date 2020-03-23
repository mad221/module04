#ifndef _RIFLE_
#define _RIFLE_
#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle();
        ~PlasmaRifle();
        virtual void attack() const;
    private:
};

#endif