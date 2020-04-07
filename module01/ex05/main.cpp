#include "Brain.hpp"
#include "Human.hpp"



int main()
{
    Human max;
    std::cout << max.identifier() << std::endl; 
    std::cout << max.getBrain().identifier() << std::endl;
}