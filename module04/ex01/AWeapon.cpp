#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name,int apcost, int damage)
{
    m_name = name;
    m_apcost = apcost;
    m_damage = damage;
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon()
{
}

std::string AWeapon::getName() const
{
    return (m_name);
}

int AWeapon::getAPCost() const
{
    return m_apcost;
}

int AWeapon::getDamage() const
{
    return (m_damage);
}

void AWeapon::attack() const
{
    std::cout << "Weapon Weapon" << std::endl;
}
