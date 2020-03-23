#ifndef _PEON_
#define _PEON_
#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon();
        ~Peon();
        Peon(std::string name);
        void getPolymorphed() const;

    private:
};
#endif