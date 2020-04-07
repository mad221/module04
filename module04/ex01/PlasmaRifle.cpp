#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
{
    m_name = "Plasma Rifle";
    m_damage = 21;
    m_apcost = 5;
}

PlasmaRifle::~PlasmaRifle()
{

}

void PlasmaRifle::attack() const
{
    std::cout << "*piouuu piouuu piouuu*" << std::endl;
}