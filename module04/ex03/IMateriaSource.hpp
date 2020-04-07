#ifndef _SOURCEIMATERIA_
#define _SOURCEIMATERIA_
#include <iostream>
#include <string>
#include "AMateria.hpp"

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {};
        virtual void learMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif