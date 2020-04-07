#ifndef _SORCERER_
#define _SORCERER_
#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
    public:
        Sorcerer();
        ~Sorcerer();
        std::string get_name() const;
        std::string get_title() const;
        Sorcerer(std::string p_name, std::string p_title);
        void polymorph(Victim const &classe) const; 

    private:
        std::string name;
        std::string title;
};

std::ostream &operator<<(std::ostream &cout, const Sorcerer &classe);

#endif