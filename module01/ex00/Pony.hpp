#ifndef _PONY_
#define _PONY_
#include <iostream>
#include <string>

void ponyOnTheStack();
void ponyOnTheHeap();

class Pony
{
    public:
        Pony();
        ~Pony();
        void setName();
        void setAge();
        void setMeal();
        void delete_pony_heap();
        void print_recap();

    private:
    std::string name;
    int age;
    std::string meal;
};

#endif