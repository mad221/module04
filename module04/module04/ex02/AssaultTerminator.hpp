#ifndef _ASSAULT_
#define _ASSOULT_
#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    private:

    public:
        AssaultTerminator();
        virtual ~AssaultTerminator();
        void battleCry();
        void rangedAttack();
        void meleeAttack();

};



#endif