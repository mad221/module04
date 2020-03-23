#include "PowerFist.hpp"

PowerFist::PowerFist()
{
    m_name = "Power Fist";
    m_damage = 50;
    m_apcost = 8;
}

PowerFist::~PowerFist()
{
}

void PowerFist::attack()
{
    std::cout << "*pschhh.....SBAM!*" << std::endl;
}
