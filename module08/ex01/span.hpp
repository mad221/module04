#ifndef _SPAN_
#define _SPAN_
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

class Span
{
    public:
        Span();
        ~Span();
        Span(unsigned int nb);
        void addNumber(int number);
        unsigned int shortestSpan();
        unsigned int longestSpan();
    private:
        std::vector<unsigned int>n;
        int lenght;
        int i;
};

#endif