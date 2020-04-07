#ifndef _AW_
#define _AW_
#include <iostream>
#include <string>

class AWeapon
{
    public:
        AWeapon(std::string const &name, int apcost, int damage);
        ~AWeapon();
        AWeapon();
        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const;
    
    protected:
        std::string m_name;
        int m_apcost;
        int m_damage;
};

#endif
