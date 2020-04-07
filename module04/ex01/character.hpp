#ifndef _CHARACTER_
#define _CHARACTER_
#include <iostream>
#include <string>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
    public:
        Character(std::string const &name);
        ~Character();
        void recoverAP();
        void equip(AWeapon *weapon);
        void attack(Enemy *enemy);
        std::string getName() const;
        int getAp() const;
        AWeapon *getWeapon() const;

    private:
        std::string m_name;
        int m_ap;
        AWeapon *m_weapon;

};

std::ostream &operator<<(std::ostream &cout, const Character &classe);

#endif