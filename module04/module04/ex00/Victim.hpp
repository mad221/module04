#ifndef _VICTIM_
#define _VICTIM_
#include <iostream>
#include <string>

class Victim
{
    public:
        Victim();
        ~Victim();
        Victim(std::string p_name);
        std::string get_name() const;
        void getPolymorphed() const;

    protected:
        std::string name;
};

std::ostream &operator<<(std::ostream &cout,const Victim &classe);

#endif