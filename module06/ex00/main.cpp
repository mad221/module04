#include "type.hpp"


static int ft_precision(char *str)
{
    int i = 0;
    int s = 0;
    while (str[i])
    {
        if (str[i] == '.')
        {
            s = 1;
            while (isdigit(str[i + s]))
            {
                s++;
            }
            return (s-1);
        }
        i++;

    }
    return (1);
}

int main(int ac, char **av)
{
    double arg;
    if (ac == 2)
        arg = atof(av[1]);   
    if (ac == 2)
    {
        try 
        {
            Type max(arg, ft_precision(av[1]));
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