#include <string>
#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *pointeur = &string;
    std::string &ref = string;

    std::cout << "pointeur = " << *pointeur;
    std::cout << std::endl;
    std::cout << "ref = " << ref << std::endl;
}