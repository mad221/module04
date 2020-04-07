#ifndef _WEAPON_
#define _WEAPON_
#include <iostream>
#include <string>

class Weapon
{
    public:
        Weapon() {};
        Weapon(std::string str) {_type = str;}
        ~Weapon() {};
        void setType(std::string str) {_type = str;};
        std::string getType() {return (_type);};
    private:
        std::string _type;
};

#endif