#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"


int main()
{
    FragTrap empty;
    FragTrap std(100, 100, 100, "max");
    std.meleeAttack("maurice");
    std.rangedAttack("maurice");
    std.beRepaired(24);
    std.takeDamage(45);
    std.beRepaired(12);
    ScavTrap vide;
    ScavTrap man(100, 150, 5, "jean");
    man.meleeAttack("maurice");
    man.rangedAttack("maurice");
    man.beRepaired(24);
    man.takeDamage(45);
    man.beRepaired(12);
    man.challengeNewComer();
    std::cout << std::endl;
    NinjaTrap nini("maxine");
    ClapTrap clap;
    nini.ninjaShoebox(man);
    nini.ninjaShoebox(std);
    nini.ninjaShoebox(nini);
    nini.ninjaShoebox(clap);

}