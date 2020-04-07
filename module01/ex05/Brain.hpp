#ifndef _BRAIN_
#define _BRAIN_
#include <string>
#include <iostream>
#include <sstream>

class Brain
{
    public:
        Brain(){this->addr << this;};
        ~Brain(){};
        const std::string identifier();
    private:
        std::stringstream addr;


};

#endif