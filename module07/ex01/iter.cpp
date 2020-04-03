#include <iostream>

template <typename T> void iter(T *array, int size, T function(T i))
{
    int i = 0;
    while (i < size)
    {
        array[i] = function(i);
        i++;
    }
}

int ft_return_i(int i)
{
    return (i);
}

int ft_return_one(int i)
{
    return (i * 0 + 1);
}

template <typename T> T ft_show_and_replace( T element)
{
    std::cout << "element replace by = " << static_cast<int>(element) << std::endl;
    return (element + 48);
}

int main()
{
    int array[10];
    iter(array, 10, ft_return_i);
    int i = -1;
    while (++i < 10)
        std::cout << array[i] << std::endl;
    iter(array, 10, ft_return_one);
    i = -1;
    while (++i < 10)
        std::cout << array[i] << std::endl;
    char str[] = "9876543210";
    iter(str, 10, ft_show_and_replace);

    
    return (0);
}