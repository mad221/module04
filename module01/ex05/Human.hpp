#ifndef _HUMAN_
#define _HUMAN_
#include <string>
#include <iostream>
#include "Brain.hpp"

class Human
{
    public:
        Human();
        ~Human();
        Brain &getBrain();
        std::string identifier();
    private:
        Brain _data;


};


#endif