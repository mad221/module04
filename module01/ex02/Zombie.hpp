#ifndef _ZOMBIE_
#define _ZOMBIE_
#include <iostream>
#include <string>

class Zombie
{
    public:
    Zombie();
    ~Zombie();
    Zombie(const std::string &name,const std::string &type);


    private:
        std::string _type;
        std::string _name;
};

#endif