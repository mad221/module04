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
    size_t i = 0;
    size_t s = 0;
    size_t a = 0;
    size_t b = 0;
    int total = 1999;
    while (i < cpy.size())
    {
        s = 0;
        while (s < cpy.size())
        {
            if (i != s && total > cpy[s] - cpy[i] && 0 < cpy[s] - cpy[i])
            {
                a = s;
                b = i;
                total = cpy[a] - cpy[b];
            }
            s++;
        }
        i++;
    }
    return (cpy[a] - cpy[b]);
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