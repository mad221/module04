#ifndef _CURE_
#define _CURE_
#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure &src);
        AMateria *clone(void) const;
        virtual void use(ICharacter &target);
};

#endif