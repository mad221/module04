#include "whatever.cpp"
#include <iostream>


int main()
{

   std::cout << "max " << max(1, 3) << std::endl;
   std::cout << "min " <<min(1.1, 2.1) << std::endl;
   std::cout << "max " << max(33333 , 9) << std::endl;
    std::cout << "min "<< min ('A', 'B') << std::endl;
  


    int a = 2;int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";std::string d = "chaine2";
    ::swap(c, d);std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return (0);
}