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


void Character::attack(Enemy *enemy)
{
    if (m_weapon != NULL)
        std::cout << m_name << " attack " << enemy->getType() << " with a " << m_weapon->getName() << std::endl;
    enemy->takeDamage(m_weapon->getDamage());
    if (enemy->getHP == 0)
        enemy->~Enemy();
} 

int Character::getAp() const
{
    return (m_ap);
}

AWeapon *Character::getWeapon()
{
    return (m_weapon);
}

std::ostream &operator<<(std::ostream &cout, Character &classe)
{
    if (classe.getWeapon() != NULL)
        std::cout << classe.getName() << " has " << classe.getAp() << " Ap and carries a " << classe.getWeapon()->getName() << std::endl;
    else
        std::cout << classe.getName() << " has " << classe.getAp() << " Ap and is unarmed" << std::endl;

}