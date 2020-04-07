#ifndef _HUMANA_
#define _HUMANA_
#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    public:
        ~HumanA() {};
        HumanA(const std::string str) {_name = str;};
        HumanA(const std::string str, Weapon &weapon);
        void setWeapon(Weapon &weapon) {_weapon = &weapon;};

        void attack();


    private:
        std::string _name;
        Weapon *_weapon;

};

#endif