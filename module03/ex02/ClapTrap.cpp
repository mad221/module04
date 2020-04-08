#include "ClapTrap.hpp"

void ClapTrap::beRepaired(unsigned int amount)
{
     if (hitPoints + int(amount) >= maxHitPoints)
    {
        this->hitPoints = maxHitPoints;
        std::cout << "energie au max" << std::endl;
    }
    else
    {
        hitPoints += amount;
        std::cout << "increase " << amount << " health\n";
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hitPoints += (this->armorReductionDamage - amount) ;
    if (this->hitPoints < 0)
        this->hitPoints = 0;
    std::cout << "take damage" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << name << " attaque " << target << " a distance causant " << rangedAttackDamage << " degat" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << name << " attaque " << target << " en melee causant " << armorReductionDamage << " degat" << std::endl;
}


ClapTrap::ClapTrap()
{
    std::cout << "Clap create" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Clap destroy" << std::endl;
}
