#include "span.hpp"

Span::Span()
{
}

Span::~Span()
{

}

Span::Span(unsigned int nbr)
{
    
    lenght = nbr;
    i = 0;

}

void Span::addNumber(int number)
{
    try
    {
        if (n.size() < lenght)
        {
            n.push_back(number);
            i++;
        }
        else 
            throw ("Container is FULL");
    }
    catch(const char *str)
    {
        std::cerr << str << '\n';
    }    
}

unsigned int Span::shortestSpan()
{
    try
    {
    if (n.size() <= 1)
        throw "unknow cause Container is so small to make analyze, container lenght equal 1 or ";
    std::vector<unsigned int> cpy = n;
    std::sort(cpy.begin(), cpy.end());
    return (cpy[1] - cpy[0]);    
    }
    catch(const char *str)
    {
        std::cerr << str;
        return (0);
    }
}

unsigned int Span::longestSpan()
{
    try
    { 
        if (n.size() <= 1)
           throw "unkwow cause container is so small to make analyze container lenght equal 1 or ";  
        std::vector<unsigned int>::iterator it;
        it = std::max_element(n.begin(), n.end());
        std::vector<unsigned int>::iterator itr;
        itr = std::min_element(n.begin(), n.end());      
            return (*it - *itr);
    }
    catch(const char *str)
    {
        std::cerr << str;
        return (0);
    }
}