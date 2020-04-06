#include "Pony.hpp"

Pony::Pony(){}



Pony::~Pony(){}

void Pony::setName()
{
    std::cout << "his name ?" << std::endl;
    std::string str;
    std::getline(std::cin, str);
    name = str;
}

void Pony::setMeal()
{
    std::cout << "Favorite meal ?" << std::endl;
    std::string str;
    std::getline(std::cin,str);
    meal = str;
}

void Pony::setAge()
{
    std::cout << "Age ?" << std::endl;
    std::string str;
    std::getline(std::cin, str);
    try
    {
       age =  std::stoi(str);
    }
    catch(const std::exception& e)
    {
        std::cout << "not a number " << std::endl;
        setAge();
    }
    
}


void Pony::print_recap()
{
    std::cout << "his name is " << name << " his age is " << age << " his meal is " << meal << std::endl;
}
void ponyOnTheStack()
{
    Pony pony;
    std::cout << "a pony on the stack is create" << std::endl;
    pony.setName();
    pony.setAge();
    pony.setMeal();
    pony.print_recap();
}

void ponyOnTheHeap()
{
    Pony *pony;
    pony = new Pony();
    std::cout << "a pony on the heap is create" << std::endl;
    pony->setName();
    pony->setAge();
    pony->setMeal();
    pony->print_recap();
    pony->delete_pony_heap();
}

void Pony::delete_pony_heap()
{
    std::cout << "delete pony on the heap" << std::endl;
    delete (this);
}

