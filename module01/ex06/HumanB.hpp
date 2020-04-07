#ifndef _HUMANB_
#define _HUMANB_
#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    public:
        ~HumanB() {};
        HumanB(const std::string str, Weapon &weapon);
        HumanB(const std::string str){_name = str; _weapon = NULL ;};
        void setWeapon(Weapon &weapon) {_weapon = &weapon;};
        void attack();


    private:
        std::string _name;
        Weapon *_weapon;

};

#endif