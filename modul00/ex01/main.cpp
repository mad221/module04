#include "annuary.hpp"


void ft_compare(std::string str, PhoneBook *array, int &i)
{
    if (str.compare("EXIT") == 0)
        array[i].exit();
    if (str.compare("ADD") == 0)
    {
        array[i].add();
        i++;
    }
    if (str.compare("SEARCH") == 0)
    {
        int s = 0;
        while (s < i)
        {
            std::cout << s << " :";
            array[s].search();
            s++;
        }
        std::cout << "SELECT A VALUE = ";
        std::getline(std::cin, str);
        int select = std::stoi(str);
        if (select >= 0 && select <= i)
            array[select].getValue();
    }
}


int main()
{
    PhoneBook array[8];
    int i = 0;
    std::string str;

    while (1)
    {
        std::cout << "annuary = ";
        std::getline(std::cin, str);
        ft_compare(str, array, i);
        if (i == 8)
            i = 0;
    }
}