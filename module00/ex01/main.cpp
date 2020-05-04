#include "annuary.hpp"


void ft_compare(std::string str, PhoneBook *array, int &i)
{
    if (str.compare("EXIT") == 0)
        array[i].exit();
    if (str.compare("ADD") == 0 && i < 8)
    {
        array[i].add();
        i++;
    }
    if (str.compare("SEARCH") == 0)
    {
        int s = 0;
        while (s < i)
        {
            array[s].add_s(s);
            array[s].search();
            s++;
        }
        if (i != 0)
            std::cout << "SELECT A VALUE BETWEEN " << 1 << " AND " << i <<  " = ";
        else
        {
            std::cout << "NO DATA CAN'T SELECT A VALUE..." << std::endl;
            return ;
        }
        std::getline(std::cin, str);
        try
        {
            int select = std::stoi(str);
            if (select >= 1 && select - 1 < i)
                array[select - 1].getValue();
        }
        catch(const std::exception& e)
        {
            std::cerr << "NOT A NUMBER" << '\n';
        }

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
    }
}