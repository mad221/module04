#ifndef _ENEMY_
#define _ENEMY_
#include "AWeapon.hpp"
#include <iostream>
#include <string>

class Enemy
{
    public:
        Enemy(int hp, std::string const &type);
        virtual ~Enemy();
        std::string getType() const;
        int getHP() const;
        virtual void takeDamage(int damage);
    protected:
        int m_hp;
        std::string m_type;

};

#endif