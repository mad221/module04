#include "mutantstack.hpp"

int main()
{
    MutantStack<int> max;   
    max.push(1);
    
    std::cout << *max.end() << std::endl;
    std::cout << *max.begin() << std::endl;
    max.pop();
    max.push(3);
    max.push(2);
    std::cout << max.top() << std::endl;
    max.pop();
    std::cout << max.top() << std::endl;
}