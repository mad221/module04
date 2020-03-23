#ifndef _ICE_
#define _ICE_
#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(const Ice &src);
        ~Ice(void);
        AMateria *clone(void) const;
        virtual void use(ICharacter &target);
};

#endif