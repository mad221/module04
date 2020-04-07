#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    int i = 0;
    while (i < 4)
    {
        _inventory[i] = NULL;
        i++;
    }
    _index = 0;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
    *this = src;
}

MateriaSource::~MateriaSource()
{

}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    if (type == "ice")
        return (new Ice());
    if (type == "cure")
        return (new Cure());
    return (NULL);
}

void  MateriaSource::learnMateria(AMateria *object)
{
    if (_index < 4)
    {
        _inventory[_index] = object;
        _index++;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &classe)
{
    if (this != &classe)
    {
        int i = 0;
        while ( i < 4)
        {
            _inventory[i] = classe._inventory[i]->clone();
        }
        _index = classe._index;
    }
}

