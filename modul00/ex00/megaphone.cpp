#include <iostream>
#include <string>
#include <algorithm>

int main(int ac, char **av)
{

    if (ac == 2)
    {
        std::string str(av[1]);
        std::transform(str.begin(), str.end(),str.begin(), ::toupper);
        std::cout << str << std::endl;
       
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

    return (0);
}