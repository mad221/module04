#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : Robot()
{
    hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 50;
    maxEnergyPoints = 50;
    level = 1;
    meleeAttackDamage = 20;
    rangedAttackDamage  = 15;
    armorReductionDamage = 3;
    name = "no name";
    std::cout << "ScavTrap default create" << std::endl;
}


ScavTrap::~ScavTrap()
{
    std::cout << "Scavtrap delete" << std::endl;
}


ScavTrap::ScavTrap(int p_hitpoints, int p_energypoints, int p_level, std::string p_name)
: Robot()
{

     hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 50;
    maxEnergyPoints = 50;
    level = 1;
    meleeAttackDamage = 20;
    rangedAttackDamage  = 15;
    armorReductionDamage = 3;
     if (p_hitpoints <= maxHitPoints && p_hitpoints >= 0)
        hitPoints = p_hitpoints;
    if (p_energypoints <= maxEnergyPoints && p_energypoints >= 0)
        energyPoints = p_energypoints;
    if (p_level >= 0)
        p_level = level;
    name = p_name;
    std::cout << "ScavTrap custom create" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
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

void ScavTrap::takeDamage(unsigned int amount)
{
    this->hitPoints += (this->armorReductionDamage - amount) ;
    if (this->hitPoints < 0)
        this->hitPoints = 0;
    std::cout << "is damaged " << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << name << " scavattaque " << target << " a distance causant " << rangedAttackDamage << " degat" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << name << " scavattaque " << target << " en melee causant " << armorReductionDamage << " degat" << std::endl;
}

void ScavTrap::challengeNewComer()
{
    std::cout << "press 1 or 2 for select a challenge" << std::endl << "your choice : ";
    std::string i;
    getline(std::cin, i);
    if (i.compare("1") == 0)
        std::cout << "challenge 1 kill your friend" << std::endl;
    else if (i.compare("2") == 0)
        std::cout << "challenge 1 kill yourself" << std::endl;
    else
        std::cout << "wrong argument taken" << std::endl;
}