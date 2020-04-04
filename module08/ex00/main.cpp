#include "easyfind.hpp"


template <typename T> 
void easyfind(T &arg1, int arg2)
{
    try
    {
        typename T::iterator iterator;
        iterator = std::find (arg1.begin(), arg1.end(), arg2);
        if (iterator == arg1.end())
            throw(0);
        else
            return (*iterator);
    }
    catch(int nb)
    {
        std::cout << nb << " occurence found in the array" <<  std::endl;
    }
}


int main()
{
    std::vector<int> a(10,2);
    easyfind(a, 3);
    easyfind(a, 2);
    std::vector<int> b(100, 88);
    easyfind(b, 3);
    easyfind(b, 2);
    easyfind(b, 88);
    b.push_back(11);
    easyfind(b, 11);
    b.push_back(14);
    easyfind(b, 14);
    
    


    return (0);
}