#include "span.hpp"

int main()
{

        Span array(3);
        array.addNumber(12);
        array.addNumber(19);
        array.addNumber(18);

        std::cout << "large is  " << array.longestSpan() << std::endl;
        std::cout << "short is " << array.shortestSpan() << std::endl;

        array.addNumber(0);
        std::cout << "short is " << array.shortestSpan() << std::endl;
        array.addNumber(1);
        std::cout << "large is " << array.longestSpan() << std::endl;

        Span jel;
        jel.addNumber(1);
        std::cout << "the value larg is " << jel.longestSpan() << std::endl;
        std::cout << "the value short is " << jel.shortestSpan() << std::endl;

        Span h(5);
        h.addNumber(6);
        h.addNumber(5);
        h.addNumber(9);
        h.addNumber(0);
        h.addNumber(8);
        h.addNumber(2);
        h.addNumber(1);
        h.addNumber(8);
        h.addNumber(1);
        h.addNumber(1);
        std::cout << "the value large is " << h.longestSpan() << std::endl;
        std::cout << "the value short is " << h.shortestSpan() << std::endl;
    return (0);
}