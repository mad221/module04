#include "AMateria.hpp"


AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type)
{
    _type = type;
    _xp = 0;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

unsigned int AMateria::getXP() const 
{
    return (_xp);
}

AMateria  &AMateria::operator=(const AMateria &classe)
{
    if (this != &classe)
    {
        _xp = classe._xp;
        _type = classe._type;
    }
    return (*this);
}
