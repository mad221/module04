#ifndef _ARRAY_
#define _ARRAY_
#include <string>
#include <iostream>


template <typename T> class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(Array<T> &cpy);
        ~Array();
        T &operator[](size_t i) const;
        unsigned int size()const ;
        T &operator=(Array const &rhs);
    private:
        T *_array;
        unsigned int _i;
};

#endif