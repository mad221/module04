#include "Character.hpp"

Character::Character()
{

}

void Character::equip(AMateria *inv)
{
    if (_index < 4)
    {
        _inventory[_index] = inv;
        _index++;
    }
}

void Character::unequip(int index)
{
    if (index < 4 && index > -1)
    _inventory[index] = NULL;

}

Character::~Character()
{

}

Character &Character::operator=(const Character &classe)
{
    if (this != &classe)
    {
        _name = classe._name;
        _index = classe._index;
        int i = 0;
        while ( i < 4)
        {
            _inventory[i] = classe._inventory[i]->clone();
            i++;
        }
    }
    return (*this);
}

Character::Character(const std::string &name)
{
    _name = name;
    _index = 0;
    int i = -1;
    while ( ++i < 4)
        _inventory[i] = NULL;
    

}

Character::Character(const Character &src)
{
    *this = src;
}


void Character::use(int index, ICharacter &target)
{
    if (index < _index)
    {
        this->_inventory[index]->use(target);
    }
}
