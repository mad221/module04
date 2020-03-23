#ifndef _POWER_
#define _POWER_
#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        ~PowerFist();
        virtual void attack();
    private:

};


#endif