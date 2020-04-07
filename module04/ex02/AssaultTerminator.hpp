#ifndef _ASSAULT_
#define _ASSAULT_
#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator();
        virtual ~AssaultTerminator();
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
        ISpaceMarine*	clone(void)			const;

};

#endif