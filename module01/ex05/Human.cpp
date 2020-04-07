#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

std::string Human::identifier() 
{
    return (_data.identifier());
}

Brain &Human::getBrain()
{
    return (_data);
}