#ifndef _CHARACTER_
#define _CHARACTER_
#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        AMateria *_inventory[4];
        std::string _name;
        int         _index;
    public:
        Character();
        ~Character();
        Character(const std::string &name);
        Character(const Character &src);
        virtual void equip(AMateria* inv);
        virtual void unequip(int index);
        virtual void use(int index, ICharacter &target);
        virtual const std::string &getName() const;
        Character &operator=(const Character &classe);

};

#endif