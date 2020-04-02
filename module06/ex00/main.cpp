#include "type.hpp"

int main(int ac, char **av)
{
    std::string arg;
    if (ac == 3)
    {
        arg = av[1];
        arg += av[2];
    }
    if (ac == 2)
        arg = av[1];
    if (ac == 2 || (ac == 3 && (arg == "+inf" || arg == "+inff")))
    {
        try 
        {
            Type max(arg);
        }
        catch (std::exception& error)
        {
            std::cout << error.what() << std::endl;
        }
    }
    else
    {
        std::cout << "please enter one argument" << std::endl;
    }
    
    return (0);
}