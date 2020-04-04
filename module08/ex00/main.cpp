#include "easyfind.hpp"


template <typename T> 
void easyfind(T &arg1, int arg2)
{
    int i = 0;

    try
    {
        while (i < arg1.size())
        {
            if (arg1[i] == arg2)
            {
                std::cout << "found it to the place " << i << std::endl;
                return ; 
            }
                i++;
        }
        throw (0);
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