#include "AssaultTerminator.hpp"


AssaultTerminator::AssaultTerminator()
{
    std::cout << "*teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I'll be back ..." << std::endl;
}

void AssaultTerminator::battleCry()
{
    std::cout << "This code is unclean. Purify it!" << std::endl;
}

void AssaultTerminator::rangedAttack()
{
    std::cout << "does nothing" << std::endl;
}

void AssaultTerminator::meleeAttack()
{
    std::cout << "* attaque with chainfists *" << std::endl;
}

