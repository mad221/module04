#ifndef _FragTrap_
#define _FragTrap_
#include <iostream>
#include <string>
#include <stdlib.h>
#include "ClapTrap.hpp"

class Robot
{
    public:
        Robot();
        ~Robot();
            
    protected:
        
};


class FragTrap : public Robot, public ClapTrap
{
    public:
        void vaulthunter_dot_exe(std::string const &target);
        FragTrap();
        ~FragTrap();
        void his_name();
        FragTrap(int p_hitpoints, int p_energypoints, int level, std::string p_name);
    private:
        
};

#endif