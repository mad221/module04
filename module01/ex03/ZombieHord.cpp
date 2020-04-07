#include "ZombieHord.hpp"

ZombieHord::~ZombieHord()
{
    delete [] this->_hord;
}


void ZombieHord::announce()
{
    int i = -1;
    while (++i < _n)
        _hord[i].announce();

}

ZombieHord::ZombieHord(int n)
{
    _hord = new  Zombie[n];
    _n = n;
    int i = -1;
    while (++i < n)
    {
        _hord[i].setName();
        _hord[i].setType();
    }    
}