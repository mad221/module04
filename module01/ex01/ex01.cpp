#include <string>
#include <iostream>

void memoyLeak()
{
    std::string *panthere = new std::string("String panthere");

    std::cout << *panthere << std::endl;
    delete (panthere);

}

int main()
{
    memoyLeak();
}