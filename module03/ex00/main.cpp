#include "FragTrap.hpp"


int main()
{
    FragTrap empty;
    FragTrap std(100, 100, 100, "max");
    std.meleeAttack("maurice");
    std.rangedAttack("maurice");
    std.beRepaired(24);
    std.takeDamage(45);
    std.beRepaired(12);

}