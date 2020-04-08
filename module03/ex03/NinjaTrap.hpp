#ifndef _NINJA_
#define _NINJA_
#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
    public:
        NinjaTrap();
        NinjaTrap(const std::string p_name);
        ~NinjaTrap();
        void ninjaShoebox(ClapTrap &clap);
        void ninjaShoebox(FragTrap &frag);
        void ninjaShoebox(ScavTrap &frag);
        void ninjaShoebox(NinjaTrap &frag);
};

#endif