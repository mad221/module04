#include "character.hpp"

Character::Character(std::string const &name)
{
    m_name = name;
    m_ap = 40;
    m_weapon = NULL;
}

Character::~Character()
{   
}

void Character::recoverAP()
{
    m_ap += 10;
    if (m_ap > 40)
        m_ap = 40;
}

void Character::equip(AWeapon *weapon)
{
    m_weapon = weapon;
}

std::string Character::getName() const
{
    return (m_name);
}


void Character::attack(Enemy *enemy)
{
    int cost;

    if (m_weapon != NULL && enemy != NULL && enemy->getHP() > 0)
    {
        cost = m_weapon->getAPCost();
        if (m_ap - cost >= 0)
        {
            m_weapon->attack();
            enemy->takeDamage(m_weapon->getDamage());
            if (enemy->getHP() <= 0)
                enemy->~Enemy();
            m_ap -= cost;
        }
        std::cout << m_name << " attack " << enemy->getType() << " with a " << m_weapon->getName() << std::endl;
    }   
} 

int Character::getAp() const
{
    return (m_ap);
}

AWeapon *Character::getWeapon() const
{
    return (m_weapon);
}

std::ostream &operator<<(std::ostream &cout,const Character &classe)
{
    if (classe.getWeapon() != NULL)
        cout << classe.getName() << " has " << classe.getAp() << " Ap and carries a " << classe.getWeapon()->getName() << std::endl;
    else
        cout << classe.getName() << " has " << classe.getAp() << " Ap and is unarmed" << std::endl;
    return (cout);
}