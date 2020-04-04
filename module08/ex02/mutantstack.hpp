#ifndef _MUTANT_
#define _MUTANT_
#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {};
        ~MutantStack() {};
     typename std::stack<T>::container_type::iterator begin() 
        {return (std::begin(std::stack<T>::c));};
     typename std::stack<T>::container_type::iterator end() 
        {return (std::end(std::stack<T>::c));};
};

#endif