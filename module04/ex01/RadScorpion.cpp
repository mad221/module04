#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : RadScorpion::Enemy(80, "RadScorpion")
{
    std::cout << "*click click click*" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPOTCH *" << std::endl;
}
