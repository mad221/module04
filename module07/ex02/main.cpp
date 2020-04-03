#include "Array.tpp"

int main()
{
    Array<int> a(10);
    int i = 0;
    while (i < 10)
    {
        a[i] = i;
        std::cout << "array de "<< i << " = " << a[i] << std::endl;
        i++;
    }
    std::cout << "size = "<< a.size() << std::endl;

    i = 0;
    std::string str = "HELLO WORD!!";
    while (i < 10)
    {
        a[i] = static_cast<char>(str[i]);
        std::cout << "array de "<< i << " = " << a[i] << std::endl;
        i++;
    }

    Array<char> c(10);
    i = 0;
    while (i < 10)
    {
        c[i] = str[i];
        std::cout << "array de "<< i << " = " << c[i] << std::endl;
        i++;
    }
    std::cout << "size = "<< c.size() << std::endl;
    try
    {
        c[12];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

}