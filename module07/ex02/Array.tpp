#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
    _array = nullptr;
    
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    _array = new T[n];
    _i = n;
}

template<typename T>
Array<T>::Array(Array<T> &cpy)
{
    *this = cpy;
}

template<typename T>
Array<T>::~Array()
{
    if (_array != nullptr)
        delete [] _array;
}

template<typename T>
T &Array<T>::operator[](size_t i) const
{
            if (!_array || i >= _i || i < 0)
                throw std::exception();
            return (_array[i]);
}

template<typename T>
T &Array<T>::operator=(Array const &rhs)
{
    if (this == rhs)
        return (this);
    if (_i != rhs._i)
    {
        if (_array != NULL)
            delete [] _array;
        this->array = new T[rhs.size()];
    }
    _i = rhs.size();
    int i = 0;
    while ( i < _i)
    {
        _array[i] = rhs._array[i];
        i++;
    }
    return (this);
}

template<typename T >
unsigned int Array<T>::size() const
{
    return (_i);
}