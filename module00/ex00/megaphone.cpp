#include <iostream>
#include <string>
#include <algorithm>

int main(int ac, char **av)
{

    if (ac >= 2)
    {
        int i = 1;
        while (i < ac)
        {
            std::string str(av[i]);
            std::transform(str.begin(), str.end(),str.begin(), ::toupper);
            std::cout << str;
            i++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

    return (0);
}